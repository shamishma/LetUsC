#include <stdio.h>
#include <math.h>
float fun(float x1, float y1, float x2, float y2);
float areacal(float x1, float y1, float x2, float y2, float x3, float y3);
int main()
{
    float x1, y1, x2, y2, x3, y3, s, area_full, x, y, area1, area2, area3;
    float a1,a2,a3,af;
    printf("Enter the first point  = ");
    scanf("%f %f", &x1, &y1);
    printf("Enter the second point = ");
    scanf("%f %f", &x2, &y2);
    printf("Enter the third point  = ");
    scanf("%f %f", &x3, &y3);
    area_full = areacal(x1, y1, x2, y2, x3, y3);
    printf("Enter the other point  = ");
    scanf("%f %f", &x, &y);
    area1 = areacal(x1,y1,x2,y2,x,y);
    area2 = areacal(x3,y3,x2,y2,x,y);
    area3 = areacal(x3,y3,x1,y1,x,y);
    printf("Full area = %f\n",area_full);
    printf("area1 = %f\n",area1);
    printf("area2 = %f\n",area2);
    printf("area3 = %f\n",area3);
    printf("After Round off\n");
    af = round(area_full);
    a1 = round(area1);
    a2 = round(area2);
    a3 = round(area3);
    printf("Full area = %.0f\n",af);
    printf("area1 = %.0f\n",a1);
    printf("area2 = %.0f\n",a2);
    printf("area3 = %.0f\n",a3);
    if(af == a1+a2+a3)
    {
        printf("The x,y point lies inside the triangle.");
    }
else
{
        printf("The x,y point lies outside the triangle.");

}
}
float fun(float x1, float y1, float x2, float y2)
{
    float d;
    d = sqrt(pow((x2 - x1), 2) + pow((y2 - y1), 2));
    return d;
}
float areacal(float x1, float y1, float x2, float y2, float x3, float y3)
{
    float a, b, c, area, s;
    a = fun(x1, y1, x2, y2);
    b = fun(x2, y2, x3, y3);
    c = fun(x3, y3, x1, y1);
    // printf("Sides of triangle %f %f %f\n",a,b,c);
    s = (a + b + c) / 2;
    area = sqrt(s * (s - a) * (s - b) * (s - c));
    return area;
    // printf("Area of triangle =%.2f\n",area);
}