#include <stdio.h>
#include <math.h>
void stats(int *, int *, double *);
int main()
{
    int sum, avg;
    double stdev;
    stas(&sum, &avg, &stdev);
    printf("sum = %d \nAverage = %d \nStandard deviation = %lf\n", sum, avg, stdev);
    return 0;
}
void stas(int *sum, int *avg, double *stdev)
{
    int n1, n2, n3, n4, n5;
    printf("Enter 5 numbers = ");
    scanf("%d %d %d %d %d", &n1, &n2, &n3, &n4, &n5);
    *sum = n1 + n2 + n3 + n4 + n5;
    *avg = *sum / 5;
    *stdev = sqrt((pow((n1 - *avg), 2.0) + pow((n2 - *avg), 2.0) +
                   pow((n3 = *avg), 2.0) + pow((n4 - *avg), 2.0) + pow((n5 - *avg), 2.0)) /
                  4);
}