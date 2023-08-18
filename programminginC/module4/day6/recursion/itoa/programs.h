#include<stdio.h>

void printitoa(int n){
    if ( n < 0 ){
        putchar('-');
        n = -n;
    }
    if ( n / 10){
        printitoa(n/10);
    }
    putchar(n%10 + '0');
}