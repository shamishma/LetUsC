#include<stdio.h>
int main()
{
    int arr[5],num=45456;
    int i;
    for(i=0;i<5;i++)
    {
        arr[i]=num%10;
        num=num/10;
    }
    for(i=0;i<5;i++)
    {
        printf("NO %d = %d\n",i+1,arr[i]);
    }
    return 0;
}