/*
* ARRAY OF FUNCTION POINTER
* we can put functions with their pointers in an array and call them through index
*/

#include <stdio.h>

// Define typedefs for different function pointers
typedef void (*PrintFunc)(void);
typedef int (*CalcFunc)(int, int);

// Define some functions that match these typedefs
void printHello() {
    printf("Hello\n");
}

void printGoodbye() {
    printf("Goodbye\n");
}

int add(int a, int b) {
    return a + b;
}

int subtract(int a, int b) {
    return a - b;
}

int main() {
    // Create an array of PrintFunc pointers
    PrintFunc printFuncs[2] = { printHello, printGoodbye };

    // Call functions using the array of function pointers
    for (int i = 0; i < 2; i++) {
        printFuncs[i]();
    }

    // Create an array of CalcFunc pointers
    CalcFunc calcFuncs[2] = { add, subtract };

    // Call functions using the array of function pointers
    int x = 10, y = 5;
    printf("Add: %d\n", calcFuncs[0](x, y));
    printf("Subtract: %d\n", calcFuncs[1](x, y));

    return 0;
}
