#include<stdio.h>
#include "programs.h"
#define MAXLEN 1000

int main(){
    //modline is output
    char line[MAXLEN], modLine[MAXLEN];
    while(getLine(line, MAXLEN) > 0) {
        escape(modLine, line);
        printf("%s\n", modLine);
    }
    return 0;
}