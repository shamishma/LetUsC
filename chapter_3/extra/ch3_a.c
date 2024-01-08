/* Finde the bigest variable */
#include<stdio.h>
int main()
{
    int a,b,c,d,e,big;
    printf("Enter a variable = ");
    scanf("%d",&a);
    printf("Enter b variable = ");
    scanf("%d",&b);
    printf("Enter c variable = ");
    scanf("%d",&c);
    printf("Enter d variable = ");
    scanf("%d",&d);
    printf("Enter e variable = ");
    scanf("%d",&e);
    if(a>b)
    big=a;
    else
    big=b;

    if(c>big)
    big=c;

    if(d>big)
    big=d;

    if(e>big)
    big=e;
    printf("biggest variable = %d\n",big);
    return 0;
}