#include<stdio.h>
#include "Porgrams.h"
#include<limits.h>

int main(){
    //hold same amt of data but unsigned only hold positive
    printf("signed char min = %d\n",SCHAR_MIN);
    printf("signed char max = %d\n",SCHAR_MAX);
    printf("unsighed char max = %u\n", UCHAR_MAX);
    //printf("unsighed char min = %u\n", UCHAR_MIN);
    return 0;
}