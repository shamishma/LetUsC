/* write a program to find all odd numbers of n series and calculate their sum by using
for loop,while loop and do while loop.*/
#include <stdio.h>
int main()
{
    int n, sum_for = 0, sum_while = 0, sum_do_while = 0;
    printf("Enter a number : ");
    scanf("%d", &n);
    printf("Using for loop : ");
    for (int i = 1; i <= n; i++)
    {
        if (i % 2 != 0)
        {
            printf("%d ", i);
            sum_for += i;
        }
    }
    printf(" = %d ", sum_for);
    int k = 1;
    printf("\nUsing do-while loop : ");
    do
    {
        if (k % 2 != 0)
        {
            printf("%d ", k);
            sum_do_while += k;
        }
        k++;
    } while (k <= n);
    printf(" = %d ", sum_do_while);
    printf("\nUsing while loop : ");
    int l = 0;
    while (l <= n)
    {
        if (l % 2 != 0)
        {
            printf("%d ",l);
            sum_while += l;
        }
        l++;
    }
    printf(" = %d ", sum_while);
    return 0;
}
