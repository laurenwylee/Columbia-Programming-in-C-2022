#include<stdio.h>
#include "programs.h"
#define MAXLEN 1000

int main(){
    char s1[] = "b-z";
    char s2[MAXLEN];
    expand(s1, s2);
    printf( "%s\n", s2);
}