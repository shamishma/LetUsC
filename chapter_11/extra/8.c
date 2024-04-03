#include <stdio.h>
void class1();
void class2();
void class3();
int arr[35];
int n = 0, i;
int main()
{
    int sum = 0;
    class1();
    class2();
    class3();
    for (i = 0; i < 35; i++)
    {
        sum = sum + arr[i];
    }
    printf("Sum of all marks = %d", sum);
    return 0;
}
void class1()
{
    for (i = n; i < 15; i++)
    {
        printf("Enter the number of %d = ", i + 1);
        scanf("%d", &arr[i]);
        n++;
    }
}
void class2()
{
    for (i = n; i < 25; i++)
    {
        printf("Enter the number of %d = ", i + 1);
        scanf("%d", &arr[i]);
        n++;
    }
}
void class3()
{
    for (i = n; i < 35; i++)
    {
        printf("Enter the number of %d = ", i + 1);
        scanf("%d", &arr[i]);
        n++;
    }
}