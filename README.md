# snippets-C
<p> My code snippets in C. I learn and I code and I write.

```
 -. .-.   .-. .-.   .-. .-.   .
  \   \ /   \   \ /   \   \ /
 / \   \   / \   \   / \   \
~   `-~ `-`   `-~ `-`   `-~ `-

```


### Syntax of C

#### Syntax Elements
1. Keywords (reserved words in C)

```C
int, return, if, else, for, while, do, break, continue, switch, case, default, 
void, char, float, double, struct, typedef, const, 
unsigned, signed, static, extern, sizeof
```

2. Identifiers

<p>Names for variables, functions, arrays, etc., must start with a letter or underscore and can be followed by letters, digits, or underscores

```C
int myVariable;
float _height;
char name6;
```

3. Basic data types
```C
int a =  27;
float b = 19.97;
double c = 3.14159;
char d = 'Y';
```

4. Variable declaration & initialization
```C
int age =  27;
float height 1.68;
char grade = 'A';
```

5. Constants
```C
const int MAX = 100;
#define PI 3.14159
```

6. Operators

<p>Arithmetic

```C
+, -, *, /, %
```

<p>Relational

```C
==, !=, <, >, >=, <=
```

<p>Logical

```C
&&, ||, 
```

<p>Bitwise

```C
&, |, ^, ~, <<, >>
```

<p>Assignment

```C
=, +=, -=, *=, /=, %=
```

<p>Increment/Decrement

```C
++, --
```

7. Conditional statements

```C
if (condition) {
    // code to execute if condition is true
} else {
    // code to execute if condition is false
}

switch (variable) {
    case value1:
        // code to execute if variable == value1
        break;
    case value2:
        // code to execute if variable == value2
        break;
    default:
        // code to execute if variable doesn't match any case
}
```

8. Loops

```C
// For loop
for (initialization; condition; increment) {
    // code to execute in the loop
}

// While loop
while (condition) {
    // code to execute in the loop
}

// Do-while loop
do {
    // code to execute in the loop
} while (condition);

```

9. Functions

- void function(): Use when no parameters are needed and no value needs to be returned.
- void function(int): Use when parameters are needed, but no value needs to be returned.
- int function(int): Use when parameters are needed and a value needs to be returned.

<p> Function declaration and definiton

```C
// Function declaration
int add(int a, int b);

// Function definition
int add(int a, int b) {
    return a + b;
}
```

<p> Function Call

```C
int result = add(5, 3);
```

10. Arrays

```C
int arr[5]; // Declaration of an array of 5 integers
arr[0] = 10; // Assigning value to the first element
```

11. Pointers

```C
int a = 10;
int *p = &a; // p is a pointer to int, holding the address of a
int value = *p; // Dereferencing pointer to get the value of a
```

12. Structure declaration & definition

```C
struct Point {
    int x;
    int y;
};

struct Point p1; // Declaration of a structure variable
p1.x = 10; // Accessing members of the structure
p1.y = 20;
```

13. Standard Input & Output

```C
#include <stdio.h>

int main() {
    int a;
    printf("Enter a number: ");
    scanf("%d", &a); // Reading input from the user
    printf("You entered: %d\n", a); // Printing output to the console
    return 0;
}
```