#include<stdio.h>

#define BUFSIZE 100
char buf[BUFSIZE];
int bufp = 0;

//get char if buffer is empty
int Getch(){
    return (bufp > 0)?
    buf[--bufp] : getchar();
}


void unGetch(int c){
    if (bufp >= BUFSIZE){
        printf("ungetch : too many characters\n");
    } else {
        buf[bufp++] = c;
        //bufp is the next free buffer position
        //buffer only for ungetch
    }
}