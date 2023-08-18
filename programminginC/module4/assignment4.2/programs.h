#include<stdio.h>
#include<ctype.h>
#include <stdbool.h>

double Atof(char s[]){
    double val, power;
    int i, sign;

    char *sp = s;
    for(i = 0; isspace(s[i]); ++i,++sp);
    sign = (s[i] == '-')?-1:1;
    if (s[i] == '+' || s[i] == '-'){
        ++sp;
        ++i;
    }
    for(val = 0.0; isdigit(s[i]); ++i,++sp){
        val = 10*val + (s[i]-'0');
    }

    if(s[i] == '.'){
        ++sp;
        ++i;
    }

    for(power = 1.0; isdigit(s[i]); ++i,++sp){
        val = 10*val + (s[i] - '0');
        power = power * 10;
    }

    //start of assignment changes
    double coefficient = (sign * val) / power;

    //check for e
    if (s[i] == 'e' || s[i] == 'E'){
        ++sp;
        ++i; //if e is present, check the exponent
    } else {
        return coefficient; //if e not present, return the current value
    }

    //check sign to see if need to divide or multiple
    int exSign;
    if (s[i] == '-'){
        exSign = -1;
        sp++;
        i++;
    } else if(s[i] == '+'){
        exSign = 1;
        sp++;
        i++;
    } else{
        exSign = 0;
    }
    
    // need initializer
   // char t[] = sp; 
    

    /*
    how can I use pointers to take the rest of the s[] for the exponent value without using two forloops
    // char t[counter] = *s[i];
    //char t[sizeof(*pt)/sizeof(&pt[0])] = *pt;
    */

    //count the number of vals after e
    int counter;
    int position = i;
    for(counter = 0; s[i]!='\0'; i++ )
        counter++;

    //hold the exponent val after e in another char[]
    char t[counter];
    int k;
    for(k = 0; counter > 0; k++,counter--, position++){
        t[k] = s[position];
    }
    t[++k] = '\0';
    
    
    //convert that char[] to an integer
    float base = Atof(t);

    //divide or multiple based on sign the number of times the exponent val is
    if(exSign != -1){
       for(int j = 0; j < base; j++){
            coefficient = coefficient * 10.0;
        } 
    } else{
        for(int j = 0; j < base; j++){
            coefficient = coefficient / 10.0;
        }
    }
    
    return coefficient;
}