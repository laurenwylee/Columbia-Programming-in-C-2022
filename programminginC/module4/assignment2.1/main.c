#include <stdio.h>
#include "programs.h"

int main(){
    int back[] = {3,3,1};
    int mid[] = {2,2,1,3,3};
    int front[] = {1,2,2};
    printf("expecting 1.... %d\n",findSingle(back)); 
    printf("expecting 1.... %d\n",findSingle(mid));
    printf("expecting 1.... %d\n",findSingle(front));
    return 0;

}