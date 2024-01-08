/* Given the lenght and breath of a rectangle, write a program to find whether the
 area of the rectangle is greater than its perimeterFor example,the area of the 
 rectangle with length=5 and breadth=4 is grater than its perimeter*/
#include<stdio.h>
int main()
{
    int l,b,AR,PR;
    printf("Enter the length of rectangle = ");
    scanf("%d",&l);
    printf("Enter the breath of rectangle = ");
    scanf("%d",&b);
    AR=l*b;
    PR=2*(l+b);
    if(AR>PR)
    {
        printf("yes! Area of rectangle is grater than its perimeter . ");
    }
    else
    {
        printf("No! Area of rectangle is not grater than its perimeter . ");
    }
    return 0;
}