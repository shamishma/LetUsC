#include<stdio.h>
int main()
{
    int i,arr[]={3,4,65,4,3,1,22,45,56,98,88,8,99,88,77,5,45};
    for(i=0;i<sizeof(arr)/sizeof(arr[0]);i++) 
    // for(i=0;i<sizeof(arr)/4)
{
    printf("%d\n",arr[i]);
}
    return 0;
}