#include <stdio.h>
void fun(int x, int y);
int main()
{
    int a, b;
    printf("Enter the value of a = ");
    scanf("%d", &a);
    printf("Enter the value of b = ");
    scanf("%d", &b);
    fun(a, b);
    return 0;
}
void fun(int x, int y)
{
    printf("The result is = %d", x+y);
}