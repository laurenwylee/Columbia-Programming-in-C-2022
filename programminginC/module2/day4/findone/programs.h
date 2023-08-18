#include <stdio.h>

int bitCount(unsigned x){
    int b;
    //for(b=0; x!=0; x>>=1){
    for(b=0;x!=0;x&=x-1){
        ++b;
        //if(x&01)
          //  b++;
    }
    return b;
}