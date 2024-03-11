#include <stdio.h>
void fun(int x, int y);
int main()
{
    int n, i = 2;
    printf("Enter a number = ");
    scanf("%d", &n);
    fun(n, i);
    return 0;
}
void fun(int x, int y)
{
    if (x == 1)
    {
        printf(";");
    }
    else if (x % y == 0)
    {
        printf("%d\t", y);
        x = x / y;
        fun(x, y);
    }
else
{
    y++;
    fun(x, y);
}
}