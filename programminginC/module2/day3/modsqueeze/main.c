#include<stdio.h>
#include"programs.h"

int main (){
    char s[] = "alexander"; //array fixed length, need more memory
    char t[] =  "ae";
    mod_Squeeze(s, t);
    printf("%s\n",s);
    return 0;
}