/*Find the pattern.*/
#include <stdio.h>
int main()
{
    int i, j, k,a=1;
    for (i = 1; i <= 4; i++)
    {
        for (j = 1; j >= i; j--)
        {
            printf(" ");
        }
        for (k = 5; k <= i; k++)
        {
            printf("%d ",a);
        }
        a++;
    }
    return 0;
}