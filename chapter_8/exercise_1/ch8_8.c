/* write a program to obtain square of a floating point number using a function.*/
#include<stdio.h>
float square(float);
int main()
{
    float a,b;
    printf("Enter the any number = ");
    scanf("%f",&a);
    b=square(a);
    printf("square of %.2f is %.2f\n !",a,b);
    return 0;
}
float square (float x)
{
    float y;
    y=x*x;
    return(y);
}