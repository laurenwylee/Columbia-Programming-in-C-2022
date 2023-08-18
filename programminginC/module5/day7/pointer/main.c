#include<stdio.h>

int main(){
    //*p not derefernce -- declaration of pointer
    //if there is a type is declaration
    int x = 1, y = 2, z[10];
    int *ip;
    ip = &x;
    y = *ip; //dereference ip --> get val of x and put in y
    //y = 1
    *ip = 0; //x = 0
    ip = &z[0] //ip --> z[0]
    return 0;
}