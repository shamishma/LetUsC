#include<stdio.h>
#include<math.h>
int main()
{
    float x[] = {34.22, 39.87, 41.85, 43.23, 40.06, 53.29, 53.29, 54.14, 49.12, 40.71, 55.15};
    float y[] = {102.43, 100.93, 97.43, 97.81, 98.32, 98.32, 100.07, 97.08, 91.59, 94.85, 94.65};
    int n, i;
    n = sizeof(y) / sizeof(y[0]);
    float sumxy = 0, sumx = 0, sumy = 0, sumxx = 0, sumyy = 0, r;
    for (i = 0; i < n; i++)
    {
        sumxy = sumxy + x[i] * y[i];
        sumx = sumx + x[i];
        sumy = sumy + y[i];
        sumxx = sumxx + x[i] * x[i];
        sumyy = sumyy + y[i] * y[i];
    }
    r = (sumxy - sumx * sumy) / sqrt((n * sumxx - sumx * sumx) * (n * sumyy - sumy * sumy));
    printf("Co-relation coefficient is %f\n", r);
    return 0;
}