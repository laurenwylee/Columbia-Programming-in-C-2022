#include<stdio.h>

/* 
strrindex(s,t), returns right most ocurence of t in s
*/

int strIndex(char s[], char t[]){
    int pos = -1;
    int i,j,k;
    for(i = 0; s[i] != '\0'; ++i){
        for (j = i , k = 0; t[k] != '\0' && s[j]==t[k] ; j++,k++);
        if (k>0 && t[k] == '\0'){
            pos = i;
        } 
    }
    return pos;
}