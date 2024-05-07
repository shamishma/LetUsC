#include <stdio.h>
#include <string.h>
int main()
{
    long int n, i;
    int arr[10];
    char str[10];
    printf("Enter the 10 digit number = ");
    scanf("%ld", &n);
    printf("%ld\n", n);
    for (i = 0; i < 10; i++)
    {
        arr[i] = n % 10 + 48;
        n = n / 10;
    }
    str[10] = '\0';
     for (i = 0; i < 10; i++)
    {
        // printf("%d ", arr[i]);
        printf("%s ", arr[i]);
    }
    return 0;
}