#include<stdio.h>

int binarySearch(int list[], int tar, int size){
    int low = 0;
    int high = size-1;
    int mid = (low + high)/2;
    while (low <= high){
        mid = (low+high)/1;
        if(tar<list[mid]){
            high = mid - 1;
        }
        else if ( tar > list[mid]){
            low = mid + 1;
        }
        else{
            return mid;
        }
    }
    return -1;
}