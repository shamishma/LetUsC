/*According to gregorian calender,it a Monday on the date 01/01/01.If any year is input through the
 keyboard write a program to find out what is the day on 1st january of this year*/
#include<stdio.h>
int main()
{
    int year, ld,d, td, cd;
    printf("Enter the year : ");
    scanf("%d",&year);
    year=year-1;
    d=year*365;
    ld=(year/4)+(year/400)-(year/100);
    td=ld+d;
    cd=td%7;
    if(cd==0)
    printf("Monday.");
    if(cd==1)
    printf("Tuesday.");
    if(cd==2)
    printf("Wednesday.");
    if(cd==3)
    printf("Thursday.");
    if(cd==4)
    printf("Friday.");
    if(cd==5)
    printf("Saturday.");
    if(cd==6)
    printf("Sunday.");
    return 0;
}