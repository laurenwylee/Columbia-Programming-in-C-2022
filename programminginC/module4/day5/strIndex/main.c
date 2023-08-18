#include<stdio.h>
#include "programs.h"

int main(){
    char s [] = "Alex is le";
    char t[] = "ae";
    printf("%d\n", strIndex(s,t));
    return 0;
}