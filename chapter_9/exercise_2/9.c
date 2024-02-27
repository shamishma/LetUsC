#include <stdio.h>
#include <math.h>
void dis(float *x1, float *x2, float *x3, float *y1, float *y2, float *y3);
int main()
{
    float x1, x2, x3, y1, y2, y3,
        d1, d2;
    printf("Enter the first point = ");
    scanf("%f %f", &x1, &y1);
    printf("Enter the second point = ");
    scanf("%f %f", &x2, &y2);
    printf("Enter the third point = ");
    scanf("%f %f", &x3, &y3);
    dis(&x1, &x2, &x3, &y1, &y2, &y3); 
    return 0;
}
void dis(float *x1, float *x2, float *x3, float *y1, float *y2, float *y3)
{
    float d1, d2;
    d1 = (*y2 - *y1) / (*x2 - *x1);
    d2 = (*y3 - *y2) / (*x3 - *x2);
    if (d1 && d2==1)
        printf("The line inside in triangle  ABC !");
    else
        printf("The line not a inside in triangle ABC !");
}
