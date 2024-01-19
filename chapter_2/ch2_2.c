/* Write a program to receive cartesian co-ordinates(x,y) of a point and convert them 
into polar co-ordinates(r,fai).(Hint r= sqrt (x^2+y^2)and fai=tan ^-1(y/x))*/
#include<stdio.h>
#include<math.h>
int main()
{
    float x,y,r,theta;
    printf("Enter the value of x : ");
    scanf("%f",&x);
    printf("Enter the value of y : ");
    scanf("%f",&y);
    r=sqrt(x*x+y*y);
    theta=atan(y/x);
    theta=theta*180/3.14;
    printf("Distance    : %.2f\n",r);
    printf("Angle       : %.2f",theta);
        return 0;
}