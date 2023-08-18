#include<stdio.h>

void array_function(){
    int c, i ,nwhite, nother;
    int ndigits[10]; //array
    nwhite = nother=0;
    for(int i=0; i<10; ++i){
        ndigits[i]=0;
    }
    //c is char of type int
    while((c=getchar())!=EOF){
        if (c>='0' && c<='9'){
            ++ndigits[c-'0']; //subtract 0 to make it an int
            //can maybe subtract by int?
        }
        else if(c==' ' || c=='\t' || c=='\n'){
            ++nwhite;
        }
        else{
            ++nother;
        }
    }
    printf("digits = ");
    for(int i =0; i<10; ++i){
        printf("%d",ndigits[i]);
    }
    printf(", white space = %d, other = %d\n", nwhite, nother);
}