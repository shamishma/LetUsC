/* Given the points(x1,y1),(x2,y2) and (x3,y3), Write a program to check if
 the three point fall on one straight line.*/
#include<stdio.h>
int main()
{
    int x1,x2,y1,y2,x3,y3,s1,s2;
    printf("Enter the first point = ");
    scanf("%d %d",&x1,&y1);
    printf("Enter the second point = ");
    scanf("%d %d",&x2,&y2);
    printf("Enter the third point = ");
    scanf("%d %d",&x3,&y3);
    s1=(y2-y1)/(x2-x1);
    s2=(y3-y2)/(x3-x2);
    if(s1==s2)
    printf("These point on one straight line !");
    else
    printf("These points not on one straight !");
    return 0;
}