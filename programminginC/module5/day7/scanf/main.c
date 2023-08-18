#include<stdio.h>
#include "programs.h"
#define SIZE 5

int main(int argc, char *argv[]){
    int n, array[SIZE];
    for(n=0; n<SIZE && getint(&array[n]) != EOF ; ++n);

    for(int i = 0; i < SIZE; ++i){
        printf("%d\n", array[i]);
    }
}