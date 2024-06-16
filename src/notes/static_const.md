### Static and Const in C

#### static Keyword

The static keyword in C can be used in different contexts, primarily for variables and functions. Its behavior changes based on the context:

Static Global Variables:

- When a global variable is declared with static, its scope is limited to the file in which it is declared. It is not accessible from other files, even if they use extern.

Static Local Variables:

- When a local variable is declared with static inside a function, its lifetime extends across the entire run of the program, but its scope remains local to the function. It retains its value between function calls.

Static Functions:

- When a function is declared with static, its scope is limited to the file in which it is declared, making it private to that file.

```C
// file1.c
#include <stdio.h>

static int global_static_var = 10; // Static global variable

static void static_function() { // Static function
    printf("Static function called. Global static var: %d\n", global_static_var);
}

void call_static_function() {
    static_function();
}

int main() {
    call_static_function();
    return 0;
}

// file2.c
#include <stdio.h>

extern void call_static_function();

int main() {
    // printf("%d\n", global_static_var); // Error: global_static_var is not accessible
    call_static_function(); // This works because call_static_function is not static
    return 0;
}

```

#### const Keyword

The const keyword in C is used to declare variables whose value cannot be changed after initialization. It indicates that a variable is read-only.

Constant Variables:

- A variable declared with const cannot be modified after its initialization.
Pointer to Constant Data:

- const can be used with pointers to indicate that the data pointed to by the pointer is constant and cannot be modified through the pointer.

Constant Pointer:

- A pointer itself can be made constant, meaning the address stored in the pointer cannot be changed after initialization.
Pointer to Constant Data and Constant Pointer:

- Both the data pointed to and the pointer itself can be made constant.

```C
#include <stdio.h>

void demo_const() {
    const int constant_var = 10; // Constant variable
    // constant_var = 20; // Error: cannot modify a const variable

    int x = 5;
    const int *ptr_to_const = &x; // Pointer to constant data
    // *ptr_to_const = 10; // Error: cannot modify data through ptr_to_const
    x = 10; // This is allowed

    int y = 15;
    int *const const_ptr = &x; // Constant pointer
    *const_ptr = 20; // This is allowed
    // const_ptr = &y; // Error: cannot change the address stored in const_ptr

    const int *const const_ptr_to_const = &x; // Constant pointer to constant data
    // *const_ptr_to_const = 25; // Error: cannot modify data
    // const_ptr_to_const = &y; // Error: cannot change the address
}

int main() {
    demo_const();
    return 0;
}
```