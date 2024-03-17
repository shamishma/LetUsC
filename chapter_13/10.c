#include <stdio.h>
int main()
{
    int arr[5] = {1, 2, 3, 4, 5};
    int arr2[5], i, j;
    for (i = 0, j = 4; i < 5; i++, j--)
    {
        arr2[j] = arr[i];
    }
    for (i = 0; i < 5; i++)
    {
        printf("%d\n", arr2[i]);
    }
    return 0;
}