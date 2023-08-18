#include<stdio.h>
#include "programs.h"

int main(){
    int list[5] = {1,2,3,4,5};
    printf("%d\n", binarySearch(list, 3, 5));
    return 0;
}