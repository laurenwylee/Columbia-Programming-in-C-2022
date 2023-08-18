#include <stdio.h>

int fish(int n, int k){
    if (n<k){
        return 2;
    }
    if ((2 * n) % k > 0){
        return ((2 * n) / k + 1 );
    } else{
        return (2 * n) / k;
    }
}

int main(){
    printf("%d\n", fish(3,2));
    printf("%d\n", fish(4,2));
    printf("%d\n", fish(1,2));
    printf("%d\n", fish(5,2));
    printf("%d\n", fish(5,3));
    printf("%d\n", fish(9,3));
    return 0;
}