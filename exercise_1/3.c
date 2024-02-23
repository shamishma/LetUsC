#include <stdio.h>
void fun(int a, int b);
int main()
{
    int a, b;
    printf("Enter the value of a ,b = ");
    scanf("%d %d", &a, &b);
    fun(a, b);
    return 0;
}
void fun(int x, int y)
{
    x = x * x;
    y = y * y;
    printf(" Value of x %d\n", x);
    printf("Value of  y %d\n", y);
}
