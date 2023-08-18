#include<stdio.h>

void any(char s1[], char s2[]){
    for (int i = 0; s1[i]!='\0'; ++i){ // traverse throught the first array
        for(int j = 0; s2[j]!='\0'; ++j){ //for every character in the first array, check if it matches any of the chracters in the second array
            if (s1[i] == s2[j]){
                printf("%c is at index %d\n", s2[j], i); //for every matched character, print
            }
        }
    }
}