#include <stdio.h>
int find_big(int x, int y, int z);
int main()
{
    int a, b, c, big;
    printf("Enter the first number =  ");
    scanf("%d", &a);
    printf("Enter the second number =  ");
    scanf("%d", &b);
    printf("Enter the third number =  ");
    scanf("%d", &c);
    big = find_big(a, b, c);
    printf("The biggest number is %d !", big);
    return 0;
}
int find_big(int x, int y, int z)
{
    int bi;
    if (x > y)
        bi = x;
    else
        bi = y;
    if (bi > z)
        bi = bi;
    else
        bi = z;
    return bi;
}