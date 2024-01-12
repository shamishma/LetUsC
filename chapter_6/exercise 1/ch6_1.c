/* Find the output.*/
#include<stdio.h>
int main()
{
    int i;
    int num, fact=1;
    printf("Enter the number : ");
    scanf("%d",&num);
    for(i=num;i>=1;i--)
    {
        fact = fact * i;
    }    
    printf("Factorial of %d is %d !",num,fact);
    return 0;
}