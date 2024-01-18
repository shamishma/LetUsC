#include <stdio.h>
void fun1(int x);
void fun2(int y);
void fun3(int z);
int main()
{
    int num;
    printf("Enter the number = ");
    scanf("%d",&num);
    fun1(num);
    fun2(num);
    fun3(num);
    return 0;
}
void fun1(int x)
{
    int m=5, mul;
    mul = m * x;
    printf("Multiplication : %d\n\n", mul);
}
void fun2(int y)
{
    int i;
    for (i = 2; i < y; i++)
    {
        if (y % i == 0)
        {
            printf("Not a prime number!\n\n");
            break;
        }
    }
    if (i == y)
    {
        printf("Prime number!\n\n");
    }
}
void fun3(int z)
{
    int i, fact = 1;
    for (i = z; i >= 1; i--)
    {
        fact = fact * i;
    }
    printf("Factorial of %d is %d !\n\n", z, fact);
}