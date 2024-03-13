#include<stdio.h>
int main()
{
    int marks[5],sum=0,i;
    for(i=0;i<5;i++)
    {
        printf("Enter the marks of = ");
        scanf("%d",&marks[i]);
    }
    for(i=0;i<5;i++)
    {
        sum += marks[i] ;
    }
    printf("The sum is = %d\n",sum);
    printf("----------------\n");
    return 0;
}