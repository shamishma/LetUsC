#include<stdio.h>
int main()
{
    int arr[] = {1,2,3,4,5,6,7,8,9,10};
    int i,t;
    for(i=0;i<10;i++)
    {
        if(i%2==0)
        {
            t=arr[i];
            arr[i]=arr[i+1];
            arr[i+1]=t;
        }
    }
    for(i=0;i<10;i++)
    {
        printf("%d\n",arr[i]);
    }
    return 0;
}