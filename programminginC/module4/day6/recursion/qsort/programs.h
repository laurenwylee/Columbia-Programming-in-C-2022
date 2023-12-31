#include<stdio.h>

void swap(int v[], int i, int j){
    int temp = v[i];
    v[i] = v[j];
    v[j] = temp;
}

void qsort(int v[], int left, int right){
    int i, last;
    void swap(int v[], int i, int j);
    if(left >= right)
        return;
    swap(v, left, (left + right)/2);
    last = left;
    for(int i = left + 1 ; i <= right ; ++i){
        if(v[i] < v[left])
            swap ( v, ++last, i);
    }
    swap(v, left, last);
    qsort(v, left, last + 1);
    qsort(v, last + 1, right);
}
 //5,1,9,8,11