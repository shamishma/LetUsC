#include<stdio.h>
int main()
{
    int arr[5] = {1,2,3,4,5};
    int arr2[5],i;
    for(i=0;i<10;i++)
    {
        arr2[4-i] = arr[i];
    }
    for(i=0;i<5;i++)
    {
        printf("%d\n",arr2[i]);
    }
    return 0;
}