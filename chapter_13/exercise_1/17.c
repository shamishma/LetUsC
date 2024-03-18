/*Ascending order*/
#include<stdio.h>
int main()
{
    int arr[25] = {3,2,6,7,1,12,9,45,67,32,91,34,56,71,44,53,66,38,19,20,22,66,0,2,21};
    int t,i,j;
    for(i=0;i<25;i++)
    {
        for(j=i+1;j<25;j++)
        {
            if(arr[i]>arr[j])
            {
                t=arr[i];
                arr[i]=arr[j];
                arr[j]=t;
            }
        }
    }
    printf("The  shortest array is = ");
    for(i=0;i<25;i++)
    {
        printf("%d ",arr[i]);
    }
    return 0;
}