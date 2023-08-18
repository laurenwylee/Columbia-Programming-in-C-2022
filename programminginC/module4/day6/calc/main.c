#include<stdio.h>
#include<stdlib.h>
#include<ctype.h>
#include "calc.h"

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