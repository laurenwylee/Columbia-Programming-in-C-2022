#include<stdio.h>
#include "programs.h"

int main(){
    int m = 0;
    int d = 0;

    month_day(1998, 60, &m, &d);
    printf("%d\t%d\n", m, d);
    printf("%d\n", day_of_year(1988,2,29));

    return 0;
}