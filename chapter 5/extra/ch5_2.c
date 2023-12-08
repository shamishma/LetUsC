#include<stdio.h>
int main()
{
    int fact=1,num;
    printf("Enter the number : ");
    scanf("%d",&num);
    while(num>=1)
    {
        fact = fact * num;
        num--;
    }
    printf("Factorial value is : %d",fact);
    return 0;
}