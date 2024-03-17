#include <stdio.h>
int main()
{
    int arr[16] = {60, 50, 34, 67, 89, 29, 36, 81, 25, 10, 3, 70, 36, 2, 92, 98};
    int i, *p;
    int small = arr[0];
    p = arr;
    for (i = 0; i < 16; i++)
    {
        // if(arr[i]<small)
        // {
        // small = arr[i];
        // }
        if (*(p + i) < small)
        {
            small = *(p + i);
        }
    }
    printf("smallest elements is = %d\n", small);
    return 0;
}