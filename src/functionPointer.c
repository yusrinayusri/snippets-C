/*
* FUNCTION POINTER
*
* Imagine you have a toy robot that can perform different actions like walking, 
* talking, and dancing. You have a remote control with different buttons to control these actions.
* Now, think of each button on the remote control as a "pointer" that points to a specific function 
* the robot can perform. When you press a button, the robot performs the corresponding action.
*/

#include <stdio.h>
#include <stdlib.h>

#define SONG "Twinkle twinkle little star"

//function prototypes
//declare the robot functions
void moveArms();
void moveLegs();
void nodHead();
void singSong();
int sendCode(int);

/* MAIN FUNCTION */
int main(){

    printf("\t FUNCTION POINTERS \n\n");

    //declare a function pointer
    void (*remoteFunction)();

    //points to the void nodHead function address
    remoteFunction = &nodHead;
    //call the function through the pointer 
    nodHead();

    // points to the void singSong function
    // In C, you can also write actionPointer = singSong; without the ampersand (&), 
    // as the function name already represents its address.
    remoteFunction = singSong;
    //call the function through the pointer
    singSong();

    //points to function
    remoteFunction = &moveArms;
    //call the function through the pointer
    moveArms();
    //points to function
    remoteFunction = moveLegs;
    //call the function through the pointer
    moveLegs();

    //int function pointer
    //same implementation as above, but for int function
    int (*remoteIntFunc)(int);
    remoteIntFunc = &sendCode;
    printf("%d \n", sendCode(7));

    return 0;
}

/* ROBOTIC FUNCTIONS DEFINITION */
void moveArms(){

    printf("Robot moves right arm at 30 degrees upwards\n");
    printf("Robot moves left arm at 30 degrees backwards\n");
    printf("Robot moves right arm at 60 degrees backwards\n");
    printf("Robot moves left arm at 60 degrees upwards\n");
    printf("........... \n");
}

void moveLegs(){

    printf("Robot moves right leg at 30 degrees forward\n");
    printf("Robot sets right leg on the floor\n");
    printf("Robot moves left leg at 40 degrees forward\n");
    printf("Robot sets left leg on the floor\n");
    printf("........... \n");
}

void nodHead(){

    printf("Robot nods head 10 degrees upward\n");
    printf("Robot nods head 10 degrees backward\n");
    printf("........... \n");
}

void singSong(){
    
    printf("Robot sings song\n");
    printf(SONG " \n");
    printf("........... \n");
}

int sendCode(int x_code){
    
    int sum = x_code + 5;
    return sum;
}