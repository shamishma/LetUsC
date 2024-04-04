#include <stdio.h>
int main()
{
    float l, b, area;
    printf("Enter value of l = ");
    scanf("%f", &l);
    printf("Enter the value of b = ");
    scanf("%f", &b);
    area = l * b;
    printf("The area of the rectangle= %.2f", area);
    return 0;
}