#include <stdio.h>
int main()
{
    int row,column;
    int i, j, k;
    printf("Enter the row : ");
    scanf("%d",&row);
    printf("Enter the column : ");
    scanf("%d",&column);
    for (i = 1; i <= row; i++)
    {
        for (j = row-1; j >= i; j--)
        {
            printf(" ");
        }
        for (k = 1; k <= i; k++)
        {
            printf("* ");
        }
        printf("\n");
    }
    // printf("\n");
    for (i = 1; i <= column; i++)
    {
        for (j = 1; j <= row; j++)
        {
            printf("* ");
        }
        printf("\n");
    }
    // printf("\n");
    for (i = 1; i <= row; i++)
    {
        for (j = 2; j <= i; j++)
        {
            printf(" ");
        }
        for (k = row; k >= i; k--)
        {
            printf("* ");
        }
        printf("\n");
    }
    return 0;
}