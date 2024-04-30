#include <stdio.h>
int main()
{
    int arr[4][3] = {12, 34, 45, 33, 22, 13, 64, 31, 78, 99, 76, 87};
    int i, j, t, k = 0, arr2[12];
    // printf("Convert 2d array in 1 d array !\n");
    for (i = 0; i < 4; i++)
    {
        for (j = 0; j < 3; j++)
        {
            arr2[k] = arr[i][j];
            k++;
        }
    }
    // printf("Inter change of the element !\n");
    for (i = 0; i < 10; i++)
    {
        for (j = i + 1; j < 10; j++)
        {
            if (arr2[i] > arr2[j])
            {
                t = arr2[i];
                arr2[i] = arr2[j];
                arr2[j] = t;
            }
        }
    }
    k=0;
    // printf("Convert 1d array in 2d array !\n");
    for (i = 0; i < 4; i++)
    {
        for (j = 0; j < 3; j++)
        {
            arr[i][j]=arr2[k];
            k++;
        }
    }
    printf("sorted 2d array !\n");
    for (i = 0; i < 4; i++)
    {
        for (j = 0; j < 3; j++)
        {
            printf("%d ",arr[i][j]);
        }
        printf("\n");
    }
    return 0;
}
