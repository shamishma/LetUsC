#include<stdio.h>
int main()
{
    int n,i
    ;
    printf("Enter a number = ");
    scanf("%d",&n);
    while(n!=0)
    {
        if(n%i==0)
        printf("%d",n);
    
    else
        i++;
    }
    return 0;
}