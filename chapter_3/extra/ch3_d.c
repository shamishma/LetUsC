/* Find the leap year.*/
#include<stdio.h>
int main()
{
    int year;
    printf("Enter the year : ");
    scanf("%d",&year);
    if(year%100==0)
    {
        if(year%400==0)
        printf("Leap Year!");
        else
        printf("Non Leap Year!");
    }
    else
    {
        if(year%4==0)
        printf("Leap Year!");
        else
        printf("Non Leap Year!");
    }
    return 0;
}