
#include<stdio.h>
int new_power(int base, int n){
    int p;
    for(p=1; n>0; --n){
        p = p*base;
    }
    return p;
}