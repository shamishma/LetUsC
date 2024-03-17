#include<stdio.h>
int main()
{
    int arr[25];
    int pos,neg,zero;
    pos=neg=zero=0;
    int i;
    for(i=0;i<25;i++)
    {
        printf("Enter number %d : ",i+1);
        scanf("%d",&arr[i]);
    }
    for(i=0;i<25;i++)
    {
        if(arr[i]<0)
        pos++;
        if(arr[i]<0)
        zero++;
        if(arr[i]<0)
        neg++;

    }
    printf("Total positive = %d\nTotal Negative = %d\nTotal zero = %d\n",pos,neg,zero);
    return 0;
}