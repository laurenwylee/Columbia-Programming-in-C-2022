#include <stdio.h>

unsigned getBits(unsigned x, int p, int n){
    return (x>>(p+1-n)) & ~(~0<<n);
}
//returns the nbit field of x that begins at position p
//50 --> 110010
//       543210
//n = 3
//p = 4
//go to four and get 3 bits right adjusted  (432)