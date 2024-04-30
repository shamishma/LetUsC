#include <stdio.h>

// #define ROWS 3
// #define COLS 3

int main()
{
    int arr[3][3] = {{9, 8, 7},
                     {6, 5, 4},
                     {3, 2, 1}};

    printf("Original 2D array:\n");
    for (int i = 0; i < 3; i++)
    {
        for (int j = 0; j < 3; j++)
        {
            printf("%d ", arr[i][j]);
        }
        printf("\n");
    }

    // Bubble sort each row
    for (int i = 0; i < 3; i++)
    {
        for (int j = 0; j < 3 - 1; j++)
        {
            for (int k = 0; k < 3 - j - 1; k++)
            {
                if (arr[i][k] > arr[i][k + 1])
                {
                    // Swap elements
                    int temp = arr[i][k];
                    arr[i][k] = arr[i][k + 1];
                    arr[i][k + 1] = temp;
                }
            }
        }
    }

    printf("\nSorted 2D array:\n");
    for (int i = 0; i < 3; i++)
    {
        for (int j = 0; j < 3; j++)
        {
            printf("%d ", arr[i][j]);
        }
        printf("\n");
    }

    return 0;
}
