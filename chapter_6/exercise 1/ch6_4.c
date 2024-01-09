/* Find the output.*/
#include <stdio.h>
int main()
{
    int i, sum = 0, n;
    printf("Enter the term : ");
    scanf("%d", &n);
    for (i = 1; i <= n; i+=i)
    {
        sum+=i;   // sum = sum + i
        // fact = fact * i;        fact*=i
    }
    printf("sum = %d", sum);
    return 0;
}