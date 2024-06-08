/*
* FUNCTION POINTER
* Passing a pointer to a function: the information that's modified is automatically returned.
* The function references a memory address and not to the value directly. Thus, manipulating the information directly.
*
* Normal function without function pointer will not modify the value directly.
*/

#include <stdio.h>
#include <stdlib.h>

/* FUNCTION PROTOTYPE */
void discount(float *x);
float normalDiscount(float y);

/* MAIN FUNCTION */
int main(){

    float price = 19.97;
    float y_price = 19.93;

    printf("\t WELCOME TO ORCHARD HOUSE MART\t June 8th, 2024\n\n");
    printf("AMMELTZ YOKO YOKO: \t RM %0.2f\n", price);

    //Calls the discount function, passing the address of the price variable. 
    //This means the discount function can modify the price variable directly.
    discount(&price);

    printf("Price after discount:\t RM %.2f\n", price);

    //use the normal function call to parse the parameter and get discounted price
    printf("ROSKEN PROBIOTIC CREAM:\t RM %0.2f\n", y_price);
    printf("Price after discount:\t RM %.2f\n", normalDiscount(y_price));

    //see the differences here
    printf("\nPrice X: %0.2f\nPrice Y: %0.2f\n", price, y_price);

    return 0;
}

/* FUNCTION DEFINITION */
//This function takes a pointer to a float (float *x) as its parameter. 
//This allows the function to modify the value of the float variable that x points to.
void discount(float *x){
    //Dereferences the pointer x to access the value it points to and multiplies that value by 0.90. 
    //This applies a 10% discount to the original price.
    *x *= 0.90;
}

//just a normal function, not directly manipulating the value
float normalDiscount(float y){
    y *= 0.90;
    return y;
}