#include<stdio.h>

void count(void){
    int c, i , nwhite, nother, ndigit[10];
    for (int i = 0; i < 10; ++i)
        ndigit[i] = 0;
    while((c=getchar())!=EOF){
        switch(c){
            case '0' : case '1' : case '2' : case '3' : case '4': case '5' : case '6' : case '7' : case '8': case '9':
                ++ndigit[c-'0'];
                break;
            case ' ' : case '\n' : case '\t':
                nwhite++;
                break;
            default:
                ++ nother;
                break;
        }
    }
    printf ("digits =" );
    for ( int i = 0 ; i <10 ; ++i){
        printf (" %d" , ndigit [ i ]) ;
    }
    printf(" , whitespace = %d , other = %d\n" , nwhite, nother);
}