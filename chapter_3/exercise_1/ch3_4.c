/*Write a program to find the absolute value of a number entered through the keyboard*/
#include<stdio.h>
int main()
{
    int a;
    printf("Enter the number : ");
    scanf("%d",&a);
    if(a<0)
          printf("The Absolute value is %d\n ",a*-1);
    
    else
         printf("The Absolute value is %d\n ",a);
    
    return 0;
}