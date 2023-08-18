#include<stdio.h>
#include"programs.h"

int main (){
    char s[30] = "Alexander"; //array fixed length, need more memory
    char t[] =  " the Great";
    strCat(s, t);
    printf("%s\n",s);
    return 0;
}