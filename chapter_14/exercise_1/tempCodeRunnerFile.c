/*write a function to shift it circularly left by two positions.*/
#include <stdio.h>
void shift(int arr[],int n);
int main()
{
    int array[] = {1, 2, 3, 4, 5, 6,8,4,2,9};
    int a;
    a = sizeof(array)/sizeof(array[0]);
    // int temp[2];
    // for (int i = 0; i < 2; i++)
    // {
    //     temp[i] = array[i];
    // }
    // for (int i = 0; i < 6 - 2; i++)
    // {
    //     array[i] = array[i + 2];
    // }
    // array[6 - 2] = temp[0];
    // array[6 - 1] = temp[1];
    // printf("Shifted Array (Circular Left by Two Positions):\n");
    // for (int i = 0; i < 6; i++)
    // {
    //     printf("%d ", array[i]);
    // }
    // printf("\n");
    shift(array,a);
        for (int i = 0; i < a; i++)
    {
        printf("%d ", array[i]);
    }
    return 0;
}

void shift(int arr[],int n)
{
    int x,i;
    x = arr[0];
    for(i=0;i<n;i++)
    {
        arr[i]=arr[i+1];
    }
    arr[i]=x;
}