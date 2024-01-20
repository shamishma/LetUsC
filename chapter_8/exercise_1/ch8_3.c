#include <stdio.h>
int cal(int x, int y, int z);
int main()
{
    int a, b, c, sum;
    printf("Enter the three numbers = ");
    scanf("%d %d %d", &a, &b, &c);
    sum = cal(a, b, c);
    printf("Sum = %d !\n", sum);
    return 0;
}
int cal(int x, int y, int z)
{
    int d;
    d = x + y + z;
    return (d);
}