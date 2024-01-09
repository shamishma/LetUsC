#include <stdio.h>
int main()
{
    int num, i;
    for (num = 1; num <= 300; num++)
    {
        
        for (i = 2; i < num ; i++)
        {
            if (num % i == 0)
            {
                // printf("Not a prime number!");
                break;
            }
        }
        if (i == num)
        {
            printf("%d ",num);
        }
    }
    return 0;
}