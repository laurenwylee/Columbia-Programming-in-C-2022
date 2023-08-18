#include <stdio.h>
#include<ctype.h>

#include "calc.h"

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
        lastc = c; //go into buffer
    }
    return NUMBER; //symbol
}

/*
int gettop(char s[]){
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
*/