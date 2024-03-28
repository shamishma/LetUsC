#include <stdio.h>
#include <math.h>
int main()
{
    float x[10], y[10];
    float sum = 0,distance;
    for (int i = 0; i < 10; i++)
    {
        printf("Enter the point x%d : ", i + 1);
        scanf("%f", &x[i]);
        printf("Enter the point y%d : ", i + 1);
        scanf("%f", &y[i]);
    }
    for (int i = 0; i < 9; i++)
    {
        distance = sqrt(pow((x[i+1] - x[i]),2) +  pow((y[i+1] - y[i]),2));
        printf("Distance of (x%d y%d) to (x%d y%d) = %.2f\n",i+1,i+1,i+2,i+2,distance );
        sum = sum + distance;
    }
    printf("Total distance of 10 points : %.2f",sum);
    return 0;
}