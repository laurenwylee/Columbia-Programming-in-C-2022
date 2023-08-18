#include<stdio.h>

int lower(int c){
    return c = (c>='A' & c<= 'Z')?
    c+'a'-'A': c;
}