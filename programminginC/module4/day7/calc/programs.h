//five functions in programs
#include<stdio.h>
#include<ctype.h>
#define BUFSIZE 100
char buf[BUFSIZE];
int bufp = 0;
#define NUMBER '0'

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

int oldgetop(char s[]){
    int i, c;
    while((s[0] = c = Getch()) == ' ' || c =='\t'); //skip white spaces
    //negative before this is defined
    s[1] = '\0';
    if (isdigit(c) && c != '.'){
        return c; //main()
    }
    i = 0;
    if(isdigit(c)){
        while(isdigit(s[++i] = c = Getch()));
    }
    if (c =='.'){
        while (isdigit(s[++i] = c = Getch()));
    }
    s[i] = '\0';
    if(c != EOF){
        unGetch(c); //go into buffer
    }
    return NUMBER; //symbol
}


#define MAXVAL 100 // not a variable, just a macro, whereever u see maxcal make 100
//symbolic constant, magic constant
int sp=0;//next free stack position
double val[MAXVAL]; //stack

void push(double t){
    if (sp < MAXVAL){
        val[sp++] = t;
    } else{
        printf("error: stack full, can't push %g\n", t);
    }
}

double pop(void){
    if (sp > 0){
        return val[--sp];
    } else {
        printf("error: stack empty\n");
        return 0.0;
    }
}

double Atof(char s[]){
    double val, power;
    int i, sign;

    for(i = 0; isspace(s[i]); ++i);
    sign = (s[i] == '-')?-1:1;
    if (s[i] == '+' || s[i] == '-'){
        ++i;
    }
    for(val = 0.0; isdigit(s[i]); ++i){
        val = 10*val + (s[i]-'0');
    }

    if(s[i] == '.'){
        ++i;
    }

    for(power = 1.0; isdigit(s[i]); ++i){
        val = 10*val + (s[i] - '0');
        power = power * 10;
    }
    return (sign * val) / power;
}

#define MAX
#define MAXOP 100
char s[MAXOP];
//#define NUMBER '0'