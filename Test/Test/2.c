#include <stdio.h>
int main()
{
    float r, h, area, v;
    printf("Enter the height = ");
    scanf("%f", &h);
    printf("Enter the radius = ");
    scanf("%f", &r);
    area = 3.14 * r * r;
    v = 3.14 * r * r * h;
    printf("The area of circle = %.2f\n", area);
    printf("The volume of cylinder= %.2f\n", v);
    return 0;
}