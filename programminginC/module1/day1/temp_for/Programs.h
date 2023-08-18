/*
Exerise 1: Modify the temp conversion program to 
print the table in reverse order in float
*/
#include<stdio.h>

void FC_table(){
    for(float fah = 300; fah >= 0; fah = fah-20){
        //don't need braces if only one statements
        printf("%f\t%f\n", fah, 5.0*(fah-32.0)/9.0);
    }
}