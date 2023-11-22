#include<stdio.h>
int main()
{
    int a,b,cmp;
    printf("Enter value of a : ");
    scanf("%d",&a);
    printf("Enter value of b : ");
    scanf("%d",&b);
    if(a==b)
    {
        printf("Both are equal\n");
    }
    else
    {
        printf("Both are not equal\n");
    }
    return 0;
}