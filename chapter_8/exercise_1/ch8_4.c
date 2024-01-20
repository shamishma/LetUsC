#include <stdio.h>
int fun(int n);
int main()
{
    int n,x;
    printf("Enter the number = ");
    scanf("%d", &n);
    x = fun(n);
    printf("value = %d",x);
    return 0;
}
int fun(int n)
{
    if (n <= 10)
        return (n * n);
    else
        return (n * n * n);
}