/*write a function to shift it circularly left by two positions.*/
#include <stdio.h>
void shift(int arr[], int n);
int main()
{
    int array[] = {1, 2, 3, 4, 5, 6, 8, 4, 2, 9};
    int a,x,i;
    a = sizeof(array) / sizeof(array[0]);
    printf("How many elements you want to shift : ");
    scanf("%d",&x);
    for(i=0;i<x;i++)
    shift(array, a);
    for (int i = 0; i < a; i++)
    {
        printf("%d ", array[i]);
    }
    return 0;
}

void shift(int arr[], int n)
{
    int x, i;
    x = arr[0];
    for (i = 0; i < n-1; i++)
    {
        arr[i] = arr[i + 1];
    }
    arr[i] = x;
}