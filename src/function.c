/*
* This file is to show how simple function works in C
*/

#include <stdio.h>
#include <stdlib.h>

//define symbolic name or constants
#define HELLO "Hello World!"

//function prototype and declaration
//is needed when the function location is below the main function. 
//so to avoid using function prototype, just move the function before the main function.
void simpleFunction();

//main function, taking int argument count, char argument value
int main(int argc, char* argv[]){

    int count = 0;

    printf(HELLO " \n");

    while (count < 3) {
        //function call
        simpleFunction();
        count++;
    }
    
    return 0;
}

//function definition
void simpleFunction(){

    printf("I love C language\n");

}