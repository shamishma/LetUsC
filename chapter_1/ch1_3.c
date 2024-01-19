/*Paper of size A0 has dimensions 1189mm*841mm. 
Each subsequent size A(n) is defined as A(n-1) cut in half, parallel to its shorter sides.
Thus ,paper of size A1 would have dimension 841mm*594mm.
 Write a program to calculate and print paper sizes A0,A1,A2,......A8.*/
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