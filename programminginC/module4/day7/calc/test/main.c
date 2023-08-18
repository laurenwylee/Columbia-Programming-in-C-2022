#include<stdio.h>
#define NUMBER '0'

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

#include<ctype.h>

int modGetop(char s[]){
    int i,c;
    static int lastc;
    if(lastc == 0){
        c= Getch();
    } else {
        c = lastc;
        lastc = 0;
    }
    while ( (s[0] = c) == ' ' || c == '\t'){
        c = Getch();
    }
    s[1] = '\0';
    if (!isdigit(c) && c != '.'){
        return c; //main()
    }

    i = 0;
    int hold;
    if (c == '-' && isdigit(hold=Getch())){
        s[++i] = c;
        c = hold;
        s[++i] = c;
    }
    if(isdigit(c)){
        while(isdigit(s[++i] = c = Getch()));
    }
    if (c =='.'){
        while (isdigit(s[++i] = c = Getch()));
    }
    s[i] = '\0';
    if(c != EOF){
        lastc = c; //go into buffer
    }
    return NUMBER; //symbol
}


#define MAXVAL 100
int sp = 0;
double val[MAXVAL];

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

#include<stdlib.h>

#define MAX
#define MAXOP 100
char s[MAXOP];



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

int main(){
    int type; //type where switch statement will work
    double op2; //division/subtraction
    while((type = modGetop(s)) != EOF){
        switch(type)
        {
            case NUMBER:
                push(Atof(s));
                break;
            case '+':
                push(pop() + pop());
                break;
            case '*':
                push(pop() * pop());
                break;
            case '-':
                op2 = pop();
                push( pop() - op2);
                break;
            case '/':
                op2 = pop();
                if(op2 != 0.0){
                    push(pop() / op2);
                } else {
                    printf("zero division\n");
                }
            // case '%':
            //     op2 = pop();
            //     if(op2 != 0.0){
            //         push(pop() % op2);
            //     } else {
            //         printf("zero division\n");
            //     }
            case '\n':
                printf("\t%g\n", pop());
                break;
            default:
                printf("error: unknown command %s\n", s);
        }
    }
    return 0;
}