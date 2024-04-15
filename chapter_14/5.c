#include <stdio.h>
int main()
{
    int arr[4][3] = {{11, 45,5}, {23, 44,7}, {76, 78,44}, {98, 22,34}}, i, j;
    for (i = 0; i < 4; i++)
    {
        for (j = 0; j < 3; j++)
        {
            printf("%d ",*(*(arr +i)));
        }
        printf("\n");
    }
    return 0;
}