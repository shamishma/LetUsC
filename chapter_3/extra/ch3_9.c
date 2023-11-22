#include<stdio.h>
int main()
{
    float s,p,diff;
    printf("Entre the purchasing price : ");
    scanf("%f",&p);
    printf("Enter the sailing price : ");
    scanf("%f",&s);
    diff=s-p;
    if(diff>0)
    {
        printf("profit of %.2frs",diff);
    }
    if(diff<0)
    {
        printf("loss of %.2frs",diff*-1);
    }
    if(diff==0)
    {
        printf("No profit or loss.");
    }
    return 0;
}