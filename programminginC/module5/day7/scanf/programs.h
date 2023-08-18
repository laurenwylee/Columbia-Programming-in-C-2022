#include<stdio.h>
#include<ctype.h>
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

int getint(int *pn){
    int c, sign;
    while(isspace(c=Getch()));
    if(!isdigit(c) && c != EOF && c!= '+' && c!= '-'){
        unGetch(c); //not a number
        return 0;
    }
    sign = (c=='-')? -1:1;
    if(c=='+' || c == '-'){
        c = Getch();
    }
    for(*pn = 0; isdigit(c); c=Getch()){
        *pn = 10* *pn + (c-'0');
    }
    *pn  = *pn  * sign;
    if(c!=EOF){
        unGetch(c);
    }
    return c;
}

void swap(int *px, int *py){
    int temp = *px;
    *px = *py;
    *py = temp;
}