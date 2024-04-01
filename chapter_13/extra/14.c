#include <stdio.h>
int main()
{
    int arr[20], sum = 0;
    int i;
    for (i = 0; i < 20; i++)
    {
        printf("Enter the number = ");
        scanf("%d", &arr[i]);
    }
    for (i = 0; i < 20; i++)
    {
        printf("No %d =%d\n", i + 1, arr[i]);
    }
    return 0;
}