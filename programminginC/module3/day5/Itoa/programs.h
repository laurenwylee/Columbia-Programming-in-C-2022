#include<stdio.h>

//c='0' = int
//i+'0' = c

void Reverse(char s[]){
    int i,j;
    char temp;
    i=0;
    while(s[i]!='\0'){
        ++i;
    }
    --i;
    if(s[i] == '\n'){
        --i;
    }
    j=0;
    while(j<i){
        temp = s[j];
        s[j]=s[i];
        s[i]=temp;
        --i;
        ++j;
    }
    //printf("%s",s);

}

void Itoi(int n, char s[]){
    int i, sign;
    if((sign = n) < 0){
        n=-n; 
    }
    i=0;
    do{
        s[i++] = n%10+'0';
    }
    while((n/=10)>0);

    if (sign < 0){
        s[i++] = '-';
    }
    s[i] = '\0';
    Reverse(s);
}
