#include<stdio.h>
int main()
{
    int arr[6]={7,2,8,3,5,9};
    int i,t,n=sizeof(arr)/sizeof(arr[0]);
    for(i=0;i<6;i++)
    {
        printf("%d\n",arr[i]);
    }
    for(i=0;i<(n/2);i++)
    {
        t=arr[i];
        arr[i]=arr[n-i-1];
        arr[n-i-1]=t;
    }
    printf("\n");
    for(i=0;i<6;i++)
    {
        printf("%d",arr[i]);
    }
    return 0;
}