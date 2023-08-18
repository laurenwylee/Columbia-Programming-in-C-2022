#include <stdio.h>
char daytable[2][13] = {
    {0,31,28,31,30,31,30,31,31,30,31,30,31},
    {0,31,29,31,30,31,30,31,31,30,31,30,31}

int pday_of_year(int year,  int month, int day){
    int leap;
    char *p;
    leap = (year % 4 == 0 && year % 100 != 0 || year % 400 ==0);
     p = daytable[leap];
     while(--month){
        day += *++p;
     }
}

void pmonth_day(int year, int yearday, int *pmonth, int *pday){
    int leap;
    char *p;
    leap = (year % 4 == 0 && year % 100 != 0 || year % 400 ==0);
    p = daytable[leap];
    while(yearday >= *++p){
        yearday -= *p;
    }
    *pmonth = p - *(daytab +leap);
    *pday = yearday;
}