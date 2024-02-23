#include <stdio.h>
int main()
{
    int a, b, c, big;
    printf("Enter the value of a,b,c = ");
    scanf("%d %d %d", &a, &b, &c);
    if (a > b && a > c)
        printf("big a");
    if (b > a && c > b)
        printf("big b");
    if (c > a && c > b)
        printf("big c");
    printf("The big is %d !", a, b);
    return 0;
}