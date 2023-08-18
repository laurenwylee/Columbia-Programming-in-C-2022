#include<stdio.h>
#include "programs.h"
int main(){
    char s[] = "chelsea";
    char c = 'e';
    squeeze(s,c);
    printf("%s\n", s);
    return 0;
}