#include <stdio.h>
#define PI 3.14456656
int main()
{
    float r, a;
    printf("Enter the radius : ");
    scanf("%f", &r);
    a = r * r * PI;
    printf("Area = %f\n",a);
    return 0;
}