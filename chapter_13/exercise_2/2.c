#include<stdio.h>
#include<math.h>
int main()
{
    int a[15] = {-6, -12, 8, 13, 11, 6, 7, 2, -6, -9, -10, 11, 10, 9, 2}, i, sum = 0;
    for(i = 0;i<15;i++)
    {
        sum = sum + a[i];
    }
    float mean = sum / 15.0;
    printf("Sum of data = %d\n",sum);
    printf("Mean of data = %.2f\n",mean);
    float sd,sigma=0;
    for(i = 0;i<15; i++)
    {
        sigma = sigma + pow((a[i] - mean),2);
    }
    sd = sqrt(sigma)/15.0;
    printf("Standard deviation = %.2f",sd);
    return 0;
}