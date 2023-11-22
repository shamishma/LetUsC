#include<stdio.h>
int main()
{
    float BS,DA,Total;
    printf("Ramesh basic salary : ");
    scanf("%f",&BS);
    if(BS>10000)
    {
    DA=BS*10/100;
    }
    else
    {
    DA=500;
    }
    printf("Ramesh's basic salary is %.2f\n",BS);
    printf("Ramesh's DA is %.2f\n",DA);
    Total=BS+DA;
    printf("Ramesh's Total Salary is %.2f\n",Total);
    return 0;
}