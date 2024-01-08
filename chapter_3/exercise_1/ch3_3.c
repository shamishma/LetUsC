/*Write a program to check whether a triangle is valid or not, if three angles
 of the triangle are entered through the keyboard. A triange is valid if the 
 sum of all the three angles is equal to 180 degrees*/
#include<stdio.h>
int main()
{
    float a,b,c;
    printf("Enter the first Angle  : ");
    scanf("%f",&a);
    printf("Enter the second Angle : ");
    scanf("%f",&b);
    printf("Enter the third Angle  : ");
    scanf("%f",&c);
    if(a+b+c==180)
    {
        printf("The triangle is valid ! ");
    }
    else
    {
        printf("The triangle is not valid ! ");
    }
    return 0;
}