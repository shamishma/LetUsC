#include <stdio.h>
int main()
{
    int arr[4][2] = {{11, 45}, {23, 44}, {76, 78}, {98, 22}}, i, j;

    for (i = 0; i < 4; i++)
    {
        for (j = 0; j < 2; j++)
        {
            printf("%d ", *(*(arr + i) + j));
        }
        printf("\n");
    }
    return 0;
}