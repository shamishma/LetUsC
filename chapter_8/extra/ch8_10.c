#include <stdio.h>
void temp(float x);
int main()
{
    float f;
    printf("Enter temp in f :");
    scanf("%f", &f);
    temp(f);
    return 0;
}
void temp(float x)
{
    float c;
    c = (x - 32) * 5 / 9.0;
    printf("\nTemperature of two cities in c is: %f", c);
}