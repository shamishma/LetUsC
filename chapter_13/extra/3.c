#include <stdio.h>
int main()
{
    int arr[10], i;
    for (i = 0; i < 10; i++)
    {
        printf("Enter the roll no. of student No. %d : ", i + 1);
        scanf("%d", &arr[i]);
    }
    for (i = 0; i < 10; i++)
    {
        printf("Roll no. of student %d - %d \n",i+1, arr[i]);
    }
    return 0;
}