#include<stdio.h>

void Qsort(int v[] , int left , int right)

{

    int i , last ;

    void swap(int v[], int i , int j) ; /* declaration*/

    if(left >= right)   

        return;

    swap(v, left, (left + right) /2);  /* move partition elem to v[0]*/
    printf("%d \n", v[left]);
    last = left;

    for(int i = left +1 ; i <= right ; ++i)

        if(v[i] <  v[left])

            swap(v, ++last, i);

    swap(v,left, last);
    for (int i = 0; i < 5; i++){
        printf("%d  ", v[i]);
    }
    printf("\n");


    Qsort(v, left, last -1);

    Qsort(v, last + 1, right);

 

}

void swap(int v[] , int i , int j)

{

    int tmp;

    tmp = v[i];

    v[i] = v[j];

    v[j] = tmp;

}

