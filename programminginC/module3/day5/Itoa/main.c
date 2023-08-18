#include<stdio.h>
#include "programs.h"

int main(){
    int n = 123;
    char s[5];
    Itoi(n, s);
    printf("%s\n", s);

    return 0;
}