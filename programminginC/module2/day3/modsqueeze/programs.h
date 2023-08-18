#include<stdio.h>

void squeeze(char s[], char c){
    int i,j;
    for(i=j=0; s[i] != '\0'; i++){
        if(s[i]!= c){
            s[j++] = s[i]; //post operator
            //can be s[j] = s[i]
            //++j
        }
        
    }
    s[j] = '\0'; //add to make it a string not an array
}

void mod_Squeeze(char s[], char t[]){
    int i,j,k;
    for(i=k=0; s[i] != '\0'; ++i){
        for(j=0; t[j]!='\0' && t[j] !=s[i]; ++j);
        if(t[j] == '\0'){
            s[k++] = s[i];  
         }
         s[k] = '\0';
    }
}