/* Write a program to print a table of a number given by user.*/
#include <stdio.h>
int main()
{
    int num;
    printf("Enter a number : ");
    scanf("%d", &num);
    int i = 1;
    while (i <= 10)
    {
        printf(" %d x %d = %d\n",num,i,num * i);
        i++;
    }
    return 0;
}