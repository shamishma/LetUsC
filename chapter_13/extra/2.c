#include<stdio.h>
int main()
{
    int arr[5],num = 45456,sum = 0;
    int i;
    for(i=0;i<5;i++)
    {
        arr[i] = num%10;
        num = num/10;
    } 
    for(i=0;i<5;i++)
    {
        sum+=arr[i];
    }
    printf("The sum is = %d",sum);
    return 0;
}
