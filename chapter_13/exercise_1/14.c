#include<stdio.h>
int main()
{
    int n,i;
    printf("How many elements there = ");
    scanf("%d",&n);
    int arr[n];
    printf("Enter %d elements = ",n);
    for(i=0;i<n;i++)
    {
        scanf("%d\n",&arr[i]);
    }
    for(i=0;i<n/2;i++)
    {
        if(arr[i] == arr[n-i-1])
        {

        }
        else
        {
            printf("No reverse order is not equal.");
            return 0;
        }
    }
    printf("Yes these are equal.");
    return 0;
}