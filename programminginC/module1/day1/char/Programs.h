#include<stdio.h>

void file_copy(){
    /*
    EOF too big of char to be stored in char type
    will not be able to hold eof
    can put char in int
    will not be int even if put in int var
    */
    int c;
    //EOF = end of file
    while((c=getchar()) !=EOF)
        putchar(c);
}