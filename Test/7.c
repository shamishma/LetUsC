/*write a program to print the pattern of triangle.*/
#include <stdio.h>
int main()
{
    int i, j, k;
    for (i = 1; i <= 4; i++)
    {
        // for (j = 1; j >= i; j--)
        // {
        //     printf(" ");
        // }
        for (k = 1; k <= i; k++)
        {
            printf(" *");
        }
        printf("\n");
    }
    return 0;
}