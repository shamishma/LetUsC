/* sort*/
#include <stdio.h>
int main()
{
    int arr[10] = {3, 2, 6, 7, 5, 9, 12, 8, 9, 10};
    int i, j, t;
    for (i = 0; i < 10; i++)
    {
        for (j = i+1; j < 10; j++)
        {
            if (arr[i] > arr[j])
            {
                t = arr[i];
                arr[i] = arr[j];
                arr[j] = t;
            }
        }
    }
    for ( i = 0; i < 10; i++)
    {
        printf("%d\n", arr[i]);
    }
    
    return 0;
}