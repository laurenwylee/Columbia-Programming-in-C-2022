#include<stdio.h>

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

int strIndex(char s[], char t[]){
    int i,j,k;
    for(i = 0; s[i] != '\0'; ++i){
        for (j = i , k = 0; t[k] != '\0' && s[j]==t[k] ; j++,k++);
        if (k>0 && t[k] == '\0'){
            return i;
        } 
    }
    return -1;
}