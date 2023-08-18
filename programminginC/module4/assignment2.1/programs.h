#include <stdio.h>

/*
Given a non-empty array of integers, every element appears twice except for one. Find that single one.
*/
int findSingle(int repeat[]){
    int i;
    //if two numbers are the same, the xor operator will result in the same binary sequence
    // if they are NOT the same, the xor will result in a different number
    //for loops checks for sameness, once two numbers are not the same, the for loop will stop -- must account for off by one
    for(i = 1; (repeat[i] ^ repeat[i-1]) == repeat[i]; i++); 
    if (repeat[i] != repeat[i-1] && i > 1){ //checks if the unpaired element is on the left or the right and checks if the element is not the first in the list
        return repeat[i];
    } else if(repeat[i] != repeat[i-1]){ //if the unpaired number is the first element in the list, this is accounted for by the first if statement
        return repeat[0];
    }else{
        return repeat[i+1]; //unpaired element is on the right
    }
}