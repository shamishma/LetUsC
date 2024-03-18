#include<stdio.h>
int main()
{
    int arr[10] = {3,5,8,3,8,9,7,2,5,10};
    int i,n,count = 0;
    printf("Enter the number : ");
    scanf("%d",&n);
    for(i=0;i<10;i++)
    {
        if(n == arr[i])
        {
            count++;
        }
    }
    printf("Total number occur in array : %d",count);
    return 0;
}