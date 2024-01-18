#include <stdio.h>
int min(int x, int y);
int main()
{
    int a, b,m;
    printf("Enter the 1st number = ");
    scanf("%d", &a);
    printf("Enter the second number = ");
    scanf("%d", &b);
    m=min(a,b);
    printf("Minimum of %d and %d is = %d !",a,b,m);
    return 0;
}
int min(int x, int y)
{
    if (x < y)
    {
        return x;
    }
    else
    {
        return y;
    }
}