/*Write a program to print all armstrong number  between 1 to n series , if sum of cubes of each digit of 
the number of the number is equal to number itself,then number is called an armstrong number
for example : 153 = 1^3+5^3+3^3*/
#include <stdio.h>
int main()
{
    int x = 0;
    int x1,x2,x3;
    while (x <= 500)
    {
        x1 = x%10;
        x2 = x%100;
        x2 = x2/10;
        x3 = x/100;
        if(x1*x1*x1 + x2*x2*x2 + x3*x3*x3 == x)
        {
            printf("Armstrong number is %d\n",x);
        }           
        x++;
    }
    return 0;
}