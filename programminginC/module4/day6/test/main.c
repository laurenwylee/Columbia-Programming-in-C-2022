#include<stdio.h>
void internstat(){
    static int i = 0;
    for ( int j = 0; j < 5; j++,i++);
    printf("%d\n", i);
}

int main(){
    internstat();
    internstat();
}