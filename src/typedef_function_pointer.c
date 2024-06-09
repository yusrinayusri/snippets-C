/*
* TYPEDEF IN FUNCTION POINTER
* Function pointers can be complex and hard to read. Using typedef can simplify their usage.
*/

#include <stdlib.h>
#include <stdio.h>

/* TYPEDEF FUNCTION POINTER */
typedef void (*fPointer)();

/* NORMAL FUNCTION POINTER */
void (*nPointer)();

// function prototypes
void singSong(int count);
void chant();

/* MAIN FUNCTION */
int main(){

    printf("\tTYPEDEF IN FUNCTION POINTER\n");

    //pointer without typedef
    nPointer = &singSong;
    singSong(9);

    nPointer = &chant;
    chant();

    //pointer with typedef
    fPointer fp = &singSong;
    singSong(8);

    fPointer fp1 = &chant;
    chant();

    return 0;
}

//function definition
void singSong(int count){

    for (int i = 0; i < count; i++){

        printf("I love C language and books!\n");
    }
}

void chant(){

    printf("LET'S CODE AND READ BOOKS!\n");

}