
#include<stdio.h>

float celsius(float fahr){
    return 5.0*(fahr-32.0)/9.0;
}

void FC_table(){
    for(float fah = 300; fah >= 0; fah = fah-20){
        //don't need braces if only one statements
        printf("%f\t%f\n", fah, celsius(fah));
    }
}
