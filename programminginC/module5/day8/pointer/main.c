#include<stdio.h>
#include "programs.h"

int main(){
    char t[] = "happles";
    char s[200] = "canhapple";
    strend(s,t);
    printf("%d\n", strend(s,t));
    return 0;
}