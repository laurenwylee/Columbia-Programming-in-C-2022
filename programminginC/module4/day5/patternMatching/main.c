#include<stdio.h>
#include "programs.h"
#define MAXLINE 1000

int main(){
    // char s [] = "Alex";
    // char t[] = "le";
    // printf("%d\n", strIndex(s,t));
    // return 0;

    char pattern[] = "ould";
    char line [MAXLINE];
    int found = 0;
    while(getLine(line, MAXLINE)> 0){
        if(strIndex(line, pattern) >= 0){
            printf("%s", line);
            ++found;
        }
    }
    return found;
}