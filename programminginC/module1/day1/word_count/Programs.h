#include<stdio.h>
 void word_count(void){

    int IN = 1; 
    int OUT = 0;

    int c, nl, nw, nc, state;
    state = OUT; // state defines if the program is in a word or not
    nl = nc = nw = 0;
    while((c=getchar()) !=EOF)
    {
        ++nc;
        if(c =='\n')
            ++nl;
        if(c == ' ' || c=='\n' || c== '\t')
            state = OUT;
        else if(state ==OUT)
        {
            state = IN;
            ++nw;
        }
    }
    printf("%d %d %d \n", nl, nw, nc);
 }