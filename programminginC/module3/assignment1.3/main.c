#include<stdio.h>
#include "programs.h"

int main(){
    char s1[] = "hello";
    char s2[] = {'e','o'};
    //what is the difference between char s2[] = "eo" and char s2[] ={'e','o'} because they cause different outputs?

    any(s1, s2);
    
    return 0;
}