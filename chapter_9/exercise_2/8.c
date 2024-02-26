#include <stdio.h>
void fun(float kg, float *p, float *g, float *t);
float main()
{
    float kg, g, t, p;
    printf("Enter the weight in kilogram =  ");
    scanf("%f", &kg);
    fun(kg, &p, &g,&t);
    printf("Weight in ton = %.2f\nWeight in gram = %.2f\nWeight in pounds = %.2f\n ", t,g,p);
    return 0;
}
void fun(float kg, float *p, float *g, float *t)
{
    *t=kg/100;
    *p = kg*2.205;
    *g=kg*1000; 
}
