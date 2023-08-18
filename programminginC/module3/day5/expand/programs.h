#include<stdio.h>

void expand(char s1[], char s2[]){
    // char x;
    // int y;
    // for( x = s1[0], y = 0; x != s1[2]+1; x++, y++){
    //     s2[y] = x;
    // }
    // printf("%s\n", s2);
    char c;
    int i, j;
    i = j = 0;
    while((c=s1[i++])!='\0'){
        if(s1[i] == '-' && s1[i+1] >=c){
            i++;
            while(c<s1[i]){
                s2[j++] = c++;
            }
        } else{
            s2[j++] = c;
        }
        s2[j] = '\0';
    }
}