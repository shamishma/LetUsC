#include <stdio.h>
int main()
{
    float pp=100000, p = 10, lp;
    int i;
    for (i = 1; i <= 10; i++)
    {
        lp = pp * p / (100 + p);
        pp = pp - lp;
        printf("The current population is : %.0f\n",pp);
    }
    printf("\n");
    return 0;
}