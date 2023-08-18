#include<stdio.h>

int strLen(char str[]){
    int count = 0;
    while(str[count] != '\0'){
        count++; //can ++count because don't assign
    }
    return count;
}