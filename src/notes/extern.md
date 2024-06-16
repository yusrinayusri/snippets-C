### Extern in C

The extern keyword in C is used to declare a global variable or function in another file. It is a way to share variables and functions between multiple files. When you declare a variable or function with extern, you are telling the compiler that the variable or function is defined in another file, not in the current one.

Basic Use of extern:

- Declare a global variable with extern:
- The variable is defined in one source file.
- The variable is declared with extern in other source files where it is used.

Declare a function with extern:

- unctions are extern by default, but you can explicitly declare them if needed.

Example code:

```C
// file1.c
#include <stdio.h>

int global_variable = 42; // Define a global variable

void display() {
    printf("Global variable is %d\n", global_variable);
}

int main() {
    display();  // Call the display function
    return 0;
}
```

```C
// file2.c
#include <stdio.h>

extern int global_variable; // Declare the global variable
extern void display();      // Declare the function

void modify_and_display() {
    global_variable = 100;  // Modify the global variable
    display();              // Call the display function
}

int main() {
    modify_and_display();   // Call the function to modify and display
    return 0;
}
```

To compile:

```C
gcc file1.c file2.c -o myprogram
```
