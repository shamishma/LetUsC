/* Write a program to receieve of an angle in degrees an check whether sum
of squares of sine and cosine of this angle is qual to 1.*/
#include<stdio.h>
#include<math.h>
int main()
{
    float x,si,co,sum;
    printf("Enter the angle : ");
    scanf("%f",&x);
    x = x * 3.14159265359/180;
    si = sin(x);
    co = cos(x);
    sum = si*si + co*co;
    if(sum  == 1)
    {
        printf("Yes this is equal to 1");
    }
    else
    {
        printf("No this is not equal to 1");
    }
    return 0;
}