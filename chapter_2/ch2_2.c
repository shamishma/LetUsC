/* Write a program to receive cartesian co-ordinates(x,y) of a point and convert them 
into polar co-ordinates(r,fai).(Hint r= sqrt (x^2+y^2)and fai=tan ^-1(y/x))*/
#include<stdio.h>
#include<math.h>
int main()
{
    float x,y,r,thetha;
    printf("Enter the value of x : ");
    scanf("%f",&x);
    printf("Enter the value of y : ");
    scanf("%f",&y);
    r=sqrt(x*x+y*y);
    thetha=atan(y/x);
    thetha=thetha*180/3.14;
    printf("Distance    : %.2f\n",r);
    printf("Angle       : %.2f",thetha);
        return 0;
}