#include<stdio.h>
#include "programs.h"

int main(){
    char in[] = "123.45e6";
    printf("%f ...should return 123450000\n", Atof(in));

    char in_one[] = "123.45e-6";
    printf("%f ...should return 0.000123\n", Atof(in_one));

    return 0;
}