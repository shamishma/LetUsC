#include<stdio.h>
int main()
{
    int a,b;
    int c;
    printf("value of a : ");
    scanf("%d",&a);
    printf("value of b : ");
    scanf("%d",&b);
    c=a;
    a=b;
    b=c;
    printf("a=%d\n",a);
    printf("b=%d\n",b);
    return 0;
}