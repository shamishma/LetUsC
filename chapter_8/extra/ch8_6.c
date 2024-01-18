#include<stdio.h>
void oddEven(int x);
int main()
{
    int a;
    printf("Enter the number = ");
    scanf("%d",&a);
    oddEven(a);

    return 0;
}
void oddEven(int x)
{
if(x%2==0)
{
    printf("%d Number is even !",x);
}
else
{
    printf("%d Number is odd !",x);
}
}