#include<stdio.h>
#include<math.h>
int main()
{
    int a,b,c;
    float sp,area;
    printf("Enter the side a of the triangle : ");
    scanf("%d",&a);
    printf("Enter the side b of the triangle : ");
    scanf("%d",&b);
    printf("Enter the side c of the triangle : ");
    scanf("%d",&c);
    sp = (a+b+c)/2.0;
    area = sqrt(sp*(sp-a)*(sp-b)*(sp-c));
    printf("area of triangle : %.2f",area);
}