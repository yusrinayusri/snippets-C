/*
* ARROW POINTER
*/

#include <stdio.h>
#include <string.h>

/* STRUCT */
// Define a structure for a crayon
struct Crayon {
    char color[20];
    float length;
};

/* MAIN FUNCTION */
int main() {
    // Create a crayon Struct variable
    struct Crayon myCrayon = {"Red", 4.5};

    // Create another crayon Struct variable
    // this time, use strcpy() to create the char variable
    // use the normal way to create non-char variable
    struct Crayon myCrayon1 ;
    strcpy(myCrayon1.color, "Blue");
    myCrayon1.length = 8.9;

    // Create a pointer to the crayon
    struct Crayon *crayonPtr = &myCrayon;
    // Create another pointer to the other crayon
    struct Crayon *crayonPtr1 = &myCrayon1;

    // Use the arrow pointer to access the color and length
    printf("Crayon color: %s\n", crayonPtr->color);
    printf("Crayon length: %.1f\n", crayonPtr->length);

    // Use the arrow pointer to access the color and length
    printf("Crayon color: %s\n", crayonPtr1->color);
    printf("Crayon length: %.1f\n", crayonPtr1->length);

    return 0;
}
