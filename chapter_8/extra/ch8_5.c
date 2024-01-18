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
    int i, z = 1;
    for (i = 1; i <= y; i++)
    {
        z = z * x;
    }
    printf("The result is = %d !", z);
}