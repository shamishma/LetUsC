#include <stdio.h>
int main()
{
    int arr[10], i,temp ,j;
    for (i = 0; i < 10; i++)
    {
        printf("Enter the roll no. of student No. %d : ", i + 1);
        scanf("%d", &arr[i]);
    }
    for (i = 0; i < 10; i++)
    {
        for(j = i + 1; j<10;j++)
        {
            if(arr[i] > arr[j])
            {
                temp = arr[i];
                arr[i] = arr[j];
                arr[j] = temp;
            }
        }
    }
    printf("Data after sort : \n");
    for(i = 0;i<10;i++)
    {
        printf("%d ",arr[i]);
    }
    return 0;
}