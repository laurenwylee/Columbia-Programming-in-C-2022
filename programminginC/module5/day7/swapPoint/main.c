#include<stdio.h>

void swap(int *px, int *py){
    int temp = *px;
    *px = *py;
    *py = temp;
}

int main(){
    int a = 5;
    int *x = &a;
    int b = 10;
    int *y = &b;
    swap(x,y);
    printf("%d %d\n", a, b);
}