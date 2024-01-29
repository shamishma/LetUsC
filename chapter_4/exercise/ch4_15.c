/*write a program using conditional operators to determine whether 
a year entered through the keyboard is a leap year or not.*/
#include<stdio.h>
int main()
{
    int year;
    printf("Enter the year : " );
    scanf("%d",&year);
    if(year%400==0 || year%100!=0 && year%4==0)
    {
        printf("leap year ! ");
    }
    else
    {
        printf("not leap year ! ");
    }
    (year%400==0 || year%100!=0 && year%4==0) ? printf("Leap year") : printf("Non Leap year"); 
    return 0;
}