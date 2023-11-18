#include<stdio.h>
#include<math.h>
int main()
{
    float l1,l2,g1,g2,d;
    printf(" Enter the value l1 : ");
    scanf("%f",&l1);
    printf(" Enter the value l2 : ");
    scanf("%f",&l2);
    printf(" Enter the value g1 : ");
    scanf("%f",&g1);
    printf(" Enter the value g2 : ");
    scanf("%f",&g2);
    l1=l1*3.14/180;
    l2=l2*3.14/180;
    g1=g1*3.14/180;
    g2=g2*3.14/180;
    d=3963*acos(sin(l1)*sin(l2) + cos(l1)*cos(l2)*cos(g2-g1));
    printf("distance = %d",d);
    return 0;
}