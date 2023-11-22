#include<stdio.h>
int main()
{
    int a;
    printf("The number is : ");
    scanf("%d",&a);
    if(a<0)
    {
    printf("The number is negative : ");
    }
    else
    {
        printf("The number is positive : ");
    }
    return 0;
}