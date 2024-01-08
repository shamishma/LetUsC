/* Given the coordinates(x,y) of center of a circle and its radius,write a program to that will
 determine whether a point lies inside the circle on the circle or outside the cirle.
 (Hint: use sqrt() and pow() function) */
#include<stdio.h>
#include<math.h>
int main()
{
    int x1,x2,y1,y2,r1,r2,d1,d2;
    printf("Enter the points x1 and y1 : ");
    scanf("%d %d",&x1,&y1);
    printf("Enter the points x2 and y2 : ");
    scanf("%d %d",&x2,&y2);
    printf("Enter the radius  : ");
    scanf("%d",&r1);
    r2 = sqrt(pow((x2-x1),2)+pow((y2-y1),2));
    if(r1>r2)
    {
        printf("The circle is inside of the circle ! ");
    }
    else if(r1<r2)
    {
        printf("The circle is outside of the circle !");
    }
    else if(r1==r2)
    {
        printf("The circle is on the surface of the circle !");
    }
    return 0;
}