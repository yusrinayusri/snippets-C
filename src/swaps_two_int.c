/*
* Try swapping values of two integers using swap() function of void data type.
*/

#include <stdio.h>

void swap(int *x, int *y){
    //x = a = 97
    //y = b = 93
    //creates a temporary variable to store the value of x/a
    int temp = *x;
    *x = *y;
    *y = temp;
}

int main(){

    int a = 97;
    int b = 93;

    printf("before swapping:\na = %d\nb= %d\n", a, b);
    swap(&a, &b);
    printf("after swapping:\na = %d\nb= %d\n", a, b);

    return 0;
}