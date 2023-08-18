#include<stdio.h>
char daytable[2][13] = {
    {0,31,28,31,30,31,30,31,31,30,31,30,31},
    {0,31,29,31,30,31,30,31,31,30,31,30,31}
};
int day_of_year(int year, int month, int day){
    int i, leap;
    leap = (year % 4 == 0 && year % 100 != 0 || year % 400 == 0);
    for(i = 1; i < month; ++i){
        day += daytable[leap][i];
    }
    return day;
}

void month_day(int year, int yearday, int* pmonth, int* pday){
    int i, leap;
    leap = (year % 4 == 0 && year % 100 != 0 || year % 400 == 0);
    for(i = 1; yearday > daytable[leap][i]; ++i){
        yearday -= daytable[leap][i];
    }
    *pmonth = i;
    *pday = yearday;
}

char* month_name(int n){
    //array of an array bc pointer is an array
    //aka array of pointers
    char* name[] = {"illegal", "Jan", "Feb","Mar","Apr","May", "Jun", "Jul", "Aug","Sept","Oct","Nov","Dec"};
    return (n < 1 || n > 12)?
        name[0] : name[n];
}