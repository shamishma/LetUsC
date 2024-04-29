/*Add 2 in each element*/
#include <stdio.h>
int main()
{
    int arr[5][3] = {1, 3, 2, 4, 3, 6, 5, 7, 8, 7, 9, 12, 15, 45, 56};
    int i, j;
    for (i = 0; i < 5; i++)
    {
        for (j = 0; j < 3; j++)
        {
            arr[i][j] = (arr[i][j] + 2);
        }
    }
    for (i = 0; i < 5; i++)
    {
        for (j = 0; j < 3; j++)
        {
            printf("%d ",arr[i][j]);
        }
        printf("\n");
    }
    
    return 0;
}