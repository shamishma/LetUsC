/* Program to calculate power of a value*/
#include<stdio.h>
float power(float ,int);
int main()
{
    float x,pow;
    int y;
    printf("Enter two numbers = ");
    scanf("%f %d",&x,&y);
pow =power(x,y);
printf("%.2f to the power %d = %.2f\n",x,y,pow);
    return 0;
}
float power(float x,int y)
{
    int i;
    float p = 1;
    for(i=1;i<=y;i++)
    p=p*x;
    return(p);
}