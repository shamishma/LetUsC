#include<stdio.h>
#include "myfun.karishma"
int main()
{
     int l;
     float s,result;
     printf("Enter the length of square = ");
     scanf("%d",&l);
     square(l);
     printf("Enter the temperature to change in celsius = ");
     scanf("%f",&s);
     result = temp(s);
     printf("Temperature is : %f",result);
   return 0;
}

