#include<stdio.h>
int main()
{
    int arr[25];
    int pos,neg,zero,even,odd;
    pos=neg=zero=even=odd=0;
    int i;
    for(i=0;i<25;i++)
    {
        printf("Enter number %d : ",i+1);
        scanf("%d",&arr[i]);
    }
    for(i=0;i<25;i++)
    {
        if(arr[i]<0)
        neg++;
        if(arr[i]>0)
        pos++;
        if(arr[i]==0)
        zero++;
        if(arr[i]%2==0)
        even++;
        if(arr[i]%2!=0)
        odd;
    }
    printf("Total positive = %d\nTotal Negative = %d\nTotal zero = %d\nTotal even = %d\nTotal odd = %d\n",pos,neg,zero,even,odd);
    return 0;
}