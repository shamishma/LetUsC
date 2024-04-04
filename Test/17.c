/* Write a program to print multiplication table of a given number in reversed order.*/
#include <stdio.h>
int main()
{
    int number, i;
    printf("Enter a number: ");
    scanf("%d", &number);
    printf("Multiplication table of %d in reverse order:\n", number);
    for (i = 10; i >= 1; i--)
    {
        printf("%d x %d = %d\n", number, i, number * i);
    }
    return 0;
}
