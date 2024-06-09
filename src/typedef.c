/*
* TYPEDEF : 
*   In C, it is a keyword used to create alias names for existing data types. 
*   This can make the code more readable and easier to manage, especially when dealing with complex types 
*   like structures, pointers, or arrays. 
*   It doesn't create a new type, but rather provides a new name for an existing type.
*
* The syntax : typedef existing_type new_type_name;
*/

#include <stdio.h>
#include <stdlib.h>
#include <stdbool.h>

/* STRUCT WITH TYPEDEF */
typedef struct{
    char color[15];
    char brand[15];
} Pencil;

/* STRUCT WITHOUT TYPEDEF */
struct Crayon{
    char color[15];
    char brand[15];
};

/* MAIN FUNCTION */
int main(){

    /* DATA TYPE WITHOUT TYPEDEF start */

    int y_age = 27;
    int f_age = 31;

    printf("\tSTRUCT WITHOUT TYPEDEF\n");
    printf("Y AGE:\t%d\nF AGE:\t%d\n\n", y_age, f_age);

    /* DATA TYPE WITHOUT TYPEDEF end */

    /* DATA TYPE WITH TYPEDEF start */

    typedef int i;
    i cardNum, cardAdd;
    cardNum = 1997;
    cardAdd = 1993;

    printf("\tSTRUCT WITH TYPEDEF\n");
    printf("CARD NUM:\t%d\nCARD ADDR:\t%d\n\n", cardNum, cardAdd);

    /* DATA TYPE WITH TYPEDEF end */
    
    /* STRUCT WITHOUT TYPEDEF start */ 

    //declare struct without typedef
    //automatic initialize the member data variables
    struct Crayon crayon1 = {"red", "Luna"};
    
    //PRINT VALUES
    printf("\tSTRUCT WITHOUT TYPEDEF\n");
    printf("CRAYON 1\n");
    printf("Color:\t %s\n", crayon1.color);
    printf("Brand:\t %s\n\n", crayon1.brand);

    /* STRUCT WITHOUT TYPEDEF ends */

    /* STRUCT WITH TYPEDEF start */ 

    //declare struct with typedef
    //automatic initialize the member data variables
    Pencil pencil1 = {"pink", "Stabilo"};
    Pencil pencil2 = {"baby blue", "PaperMate"};
    
    //PRINT VALUES
    printf("\tSTRUCT WITH TYPEDEF\n");
    printf("PENCIL 1\n");
    printf("Color:\t %s\n", pencil1.color);
    printf("Brand:\t %s\n\n", pencil1.brand);
    printf("PENCIL 2\n");
    printf("Color:\t %s\n", pencil2.color);
    printf("Brand:\t %s\n\n", pencil2.brand);

    /* STRUCT WITH TYPEDEF ends */

    /* POINTER WITHOUT TYPEDEF start */

    int age = 27;
    bool canDrive = false;

    int *p = &age;

    printf("\tPOINTER WITHOUT TYPEDEF\n");
    printf("AGE:\t\t%d\nCANDRIVE:\t%d\nPOINTER TO:\t%d\n\n", age, canDrive, *p);

    /* POINTER WITHOUT TYPEDEF end */

    /* POINTER WITH TYPEDEF start */

    int age_a = 31;

    typedef int* Ptr;
    Ptr ptr1, ptr2;

    ptr1 = &age;
    ptr2 = &age_a;

    printf("\tPOINTER WITH TYPEDEF\n");
    printf("Y AGE:\t%d\nF AGE:\t%d\n\n", *ptr1, *ptr2);

    /* POINTER WITH TYPEDEF end */

    return 0;
}

/* 
* Summary:
*   typedef is used to create alias names for existing data types.
*   It helps in making the code more readable and easier to manage.
*   It is especially useful for complex types like structures, function pointers, and arrays.
*   It does not create a new data type but provides a new name for an existing type.
*/