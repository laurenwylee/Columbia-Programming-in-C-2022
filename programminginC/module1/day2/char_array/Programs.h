#include<stdio.h>

//dont interfere with user input, copy input
//copy from to to
void copy(char to[], char from[]){
    int i = 0;
    //return left hand side
    while((to[i] = from[i]) != '\0'){
        ++i;
    }
}


//only arrays of characters can hold line
int getLine(char s[], int limit){
    int c, i;
    //a
    //need space for null terminating character
    for(i=0; i< limit-1 && (c=getchar())!=EOF && c!= '\n'; ++i){
        s[i] = c;
    }
    if (c=='\n') {
        //b
        //new line considered a new character
        s[i]=c;
        //need to increment for the null terminating character
        ++i;
    }
    //c
    s[i] = '\0';
    return i;
}