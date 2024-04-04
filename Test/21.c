/* Write a program to calculate the sum of number occurring in the multiplication table of n numb=0er.*/
#include <stdio.h>
int main()
{
    int n, sum=0,x;
    printf("Enter a number : ");
    scanf("%d", &n);
    for (int i = 1; i <= 10; i++)
    {
        x= n * i;
        printf("%d x %d = %d\n", n, i,n*i);
        sum += x;
    }
    printf("Sum of numbers in the multiplication table: %d\n", sum);
    return 0;
}
