#include<stdio.h>
#include "programs.h"

int main(){
    int s[] = {2,6,7,8,4};
    Qsort(s,0,4);
    for (int i = 0; i < 5; i++){
        printf("%d  ", s[i]);
    }
    printf("\n");
}
