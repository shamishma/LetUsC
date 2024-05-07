#include <stdio.h>
int main()
{
    int n, mul = 10, sum = 0, i;
    char ISBN[11];
    printf("Enter the ISBN number : ");
    scanf("%s", &ISBN);
    for (i = 0; i < 10; i++)
    {
        if (ISBN[i] == 'x' || ISBN[i] == 'X')
        {
            n = 10;
            sum = sum + n * mul;
        }
        else
        {
            n = ISBN[i] - 48;
            sum = sum + n * mul;
        }
        mul--;
    }
    if (sum % 11 == 0)
    {
        printf("Valid ISBN number.\n");
    }
    else
    {
        printf("invalid ISBN no.\n");
    }

    return 0;
}