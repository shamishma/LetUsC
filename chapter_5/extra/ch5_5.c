#include <stdio.h>
int main()
{
  int year;
  printf("Enter the year:\n");
scanf("%d",&year);
((year%400==0) ||(year%100!=0)&&(year%4==0))?printf("It is a leap year!"):printf("It is not a leap year!");

  return 0;
}