#include<stdio.h>
#include "programs.h"
#define MAXLINES 5000

int main(){
    int nLines;
    if ((nLines = readLines(LinePtr, MAXLINES)) >= 0){
        Qsort(LinePtr, 0, nLines-1);
        writeLines(LinePtr, nLines);
    }
    else {
        printf("errors: input too big, to sort \n");
    }
}