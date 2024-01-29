/*Write a program to receive an integer and find its octal equivalent. */
#include <stdio.h>
#include <math.h>
int main()
{
    int num, oct=0, rem,i=0;
    printf("Enter the number : ");
    scanf("%d", &num);
    while (num != 0)
    {
        rem = num % 8;
        num = num / 8;
        oct = oct + rem * pow(10,i);  
        i++;
    }
    printf("Octal Value of entered number is %d",oct);
    return 0;
}