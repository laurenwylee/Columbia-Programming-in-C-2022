#include<stdio.h>

void FC_table(){
    int fah, celsius;
    int low, upper, step;
    low = 0;
    upper = 300;
    step = 20;
    fah = low;
    while(fah <= upper){
        celsius = 5*(fah-32)/9;
        //fah match with first d and cel match w second d
        printf("%d\t%d\n", fah, celsius);
        fah = fah + step;
    }
}