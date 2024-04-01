#include<stdio.h>
#include<math.h>
int main()
{
    float a[6] = {137.4,155.2,149.3,160.0,155.6,149.7};
    float b[6] = {80.9,92.62,97.93,100.25,68.95,120.0};
    float angle[6] = {0.78,0.89,1.35,9.0,1.25,1.75};
    float area[6],max;
    int i;
    for(i=0;i<6;i++)
    {
        area[i] = 0.5*a[i]*b[i]*sin(angle[i]);
        printf("Area of triangle %d is %f\n",i+1,area[i]);
    }
    max = area[0];
    for(i=0;i<6;i++)
    {
        if(area[i] > max)
        {
            max = area[i];
        }
    }
    printf("Maximum area in all triangles is %f\n",max);
    return 0;
}