#include<stdio.h>
int main()
{
    int marks[5],sum;
    printf("Enter the marks of s1 = ");
    scanf("%d",&marks[0]);
    printf("Enter the marks of s2 = ");
    scanf("%d",&marks[1]);
    printf("Enter the marks of s3 = ");
    scanf("%d",&marks[2]);
    printf("Enter the marks of s4 = ");
    scanf("%d",&marks[3]);
    printf("Enter the marks of s5 = ");
    scanf("%d",&marks[4]);
    sum = marks[0]+marks[1]+marks[2]+marks[3]+marks[4];
    printf("The sum is = %d\n",sum);
    printf("-----------------------\n");
    return 0;
}