#include<stdio.h>
void fun1( );
int main()
{
    fun1();
    return 0;
}
void fun1()
{
int a,b,sum;
    printf("Enter the value of a and b = ");
    scanf("%d %d",&a,&b);
    sum = a+b;
    printf("The sum is %d ",sum);
    return 0;
}
