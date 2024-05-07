#include <stdio.h>
#include <string.h>
int main()
{
    long long int n = 4567123456789129, i;
    int arr[16], digit, sum = 0, sum2 = 0, sum3 = 0;
    // printf("Enter the 16 digit number = ");
    // scanf("%lld",&n);
    // printf("%lld\n",n);
    for (i = 15; i >= 0; i--)
    {
        arr[i] = n % 10;
        n = n / 10;
    }
    for (i = 0; i < 16; i++)
    {
        if (i % 2 == 0)
        {
            digit = arr[i] * 2;
            if (digit > 9)
            {
                digit = digit - 9;
            }
            sum = sum + digit;
        }
        else
        {
            sum2 = sum + digit;
        }
    }
    // printf("%d ",arr[i]);
    printf("%d\n", sum);
    printf("%d\n ", sum2);
    sum3 = sum + sum2;
    printf("%d\n", sum3);
    if (sum3 % 10 == 0) /*if sum3=80*/
    {
        printf("Credit number is valid !");
    }
    else
    {
        printf("Credit card number is not valid !");
    }

    return 0;
}