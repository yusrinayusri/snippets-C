/*
* POINTER IN C
* understanding how pointer works
*/

#include <stdio.h>
#include <stdlib.h>

/* MAIN FUNCTION */
int main() {
    //declare variable
    int treasure = 1997;  // Our treasure chest with 1997 gems
    //declare pointer
    int *map;       // Our treasure map
    //point the pointer to the address of the variable
    map = &treasure;  // Map points to the treasure

    printf("Number of gems: %d\n", treasure);  // Shows the treasure directly
    printf("Number of gems through map: %d\n", *map);  // Uses the map to find the treasure
    
    // Changes the number of gems through the map
    //anything that changes through pointer, will be changed directly in the memory address
    *map = 1993;  
    printf("New number of gems: %d\n", treasure);  // Shows the updated treasure

    return 0;
}
