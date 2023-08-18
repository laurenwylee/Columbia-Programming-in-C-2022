#include<stdio.h>

int power_fumn(int  base, int n){
    int retval=1;
    for (int i =0; i<n; ++i){
        retval = base * retval;
    }
    return retval;
}