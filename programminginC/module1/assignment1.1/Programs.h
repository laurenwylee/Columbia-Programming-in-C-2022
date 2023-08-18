#include<stdio.h>

void triange_area(){
    int height,base;
    printf("Enter the height of the triangle:\n");
    //the second parameter of scanf is int* which is a pointer to a variable of datatype int
    //*int different from int so need & before the variable name
    scanf("%d", &height);
    printf("Enter the base of the triangle:\n");
    scanf("%d", &base);

   printf("%f\n", height*base*0.5); //converted to float when multiplied by float 0.5
}