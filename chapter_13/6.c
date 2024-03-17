/*Total salary paid by company through array*/
#include <stdio.h>
void entsal(int *a);
int main()
{
    int arr[10], i, sum = 0;
    entsal(arr);
    for (i = 0; i < 10; i++)
    {
        sum += arr[i];
    }
    printf("Totl salary paid = %d\n", sum);

    return 0;
}
void entsal(int *a)
{
    int i;
    for (i = 0; i < 10; i++)
    {
        printf("Enter the salary of emp %d = ", i + 1);
        scanf("%d", &a[i]);
    }
}