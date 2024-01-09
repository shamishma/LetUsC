/*if the lenght of three side of a triangle are entere through the keborad, write a program
 to check whether the triangle is valid is or not.The triangle is valid if the sum of two 
 sides is greater than the largest of three sides.*/
#include <stdio.h>
int main()
{
    int a, b, c, big, sum;
    printf("Enter a variable = ");
    scanf("%d %d %d", &a, &b, &c);
    if (a > b)
    {
        if (a > c)
        {
            big = a;
            sum = b + c;
        }
        else
        {
            big = c;
            sum = a + b;
        }
    }
    else
    {
        if (b > c)
        {
            big = b;
            sum = c + a;
        }
        else
        {
            big = c;
            sum = a + b;
        }
    }
    if (sum > big)
    {
        printf("It is a valid triangle ! ");
    }
    else
    {
        printf("It is not a valid triangle ! ");
    }
    return 0;
}