#include <stdio.h>
int main()
{
    int num1, num2, i = 2, r;
    printf("Enter a number : ");
    scanf("%d", &num1);
    printf("Enter a number : ");
    scanf("%d", &num2);
    printf("factors of %d : ", num1);
    while (num1 > 1)
    {
        if (num1 % i == 0)
        {
            num1 = num1 / i;
            printf("%d ", i);
        }
        else
        {
            i++;
        }
    }
    printf("\nfactors of %d : ", num2);
    i = 2;
    while (num2 > 1)
    {
        if (num2 % i == 0)
        {
            num2 = num2 / i;
            printf("%d ", i);
        }
        else
        {
            i++;
        }
    }
    return 0;
}