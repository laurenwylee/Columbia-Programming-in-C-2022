#include <stdio.h>
#include "programs.h"

int main(){
    int ar[]={4,2,6,1,5};
    shellsort(ar, 5);

    int p;
    for (p = 0; p < 5; p++){
        printf("%d,", ar[p]);
    }

    return 0;
}