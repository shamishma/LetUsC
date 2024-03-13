#include <stdio.h>
void fun(int *arr);
int main()
{
    int arr[5] = {3, 4, 6, 9, 7};
    fun(arr);
    return 0;
}
void fun(int *arr)
{
    int i;
    for (i = 0; i < 5; i++)
    {
        printf("The value of array is %d \n",*(arr+i));
    }
}