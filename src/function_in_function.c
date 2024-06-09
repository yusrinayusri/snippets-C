/*
* FUNCTION IN FUNCTION (WITH TYPEDEF)
* we can pass function pointers to other functions to create more flexible and reusable code
*/

#include <stdlib.h>
#include <stdio.h>

/* FUNCTION POINTER */
typedef float (*ptr)(float);

/* FUNCTION PROTOTYPE */
float discount(float price_original);
//this function takes another function as parameter
float displayDiscount(ptr pfunc, float price_ori);

/* MAIN FUNCTION */
int main () {

    printf("\tWELCOME TO ORCHARD HOUSE MART\n\n");

    float shokubutsu = 9.99;
    float diane = 12.99;

    //show original price
    printf("Shokubutsu:\t%.2f\n", shokubutsu);
    printf("Diane:\t\t%.2f\n", diane);

    //declare pointer function discount
    ptr pf = &discount;
    //executes the function displayDiscount
    printf("New Shokubutsu:\t%.2f\n", displayDiscount(pf, shokubutsu));
    printf("New Diane:\t%.2f\n", displayDiscount(pf, shokubutsu));
    
    return 0;

}

/* FUNCTION DECLARATION */
float discount(float price_original){

    price_original *= 0.80;
    return price_original;
}

float displayDiscount(ptr pfunc, float price_ori){

    // this will bring the parameter to function discount to be calculated
    // after that, return the value to MAIN
    return (pfunc(price_ori) + 99.00);
}