#include <stdio.h>
void areaperi(int, float *, float *);
int main()
{
    int radius;
    float area, perimeter;
    printf("Enter radius of a circle = ");
    scanf("%d", &radius);
    areaperi(radius, &area, &perimeter);
    printf("Area      = %.2f\n", area);
    printf("Perimeter = %.2f \n", perimeter);
    printf("------------------/");
    return 0;
}
void areaperi(int r, float *a, float *p)
{
    *a = 3.14 * r * r;
    *p = 2 * 3.14 * r;
}