#include<stdio.h>
#include "Programs.h"
#define MAXLINE 1000

int main(){
    int length;
    int max;
    char line[MAXLINE];
    char longest[MAXLINE];
    max = 0;
    while((length = getLine(line, MAXLINE))>0){
        if(length>max){
            max = length;
            //can't use equal sign in array
            copy(longest, line);
        }
    }
    if(max>0){
        printf("%s", longest);
    }
    return 0;
}