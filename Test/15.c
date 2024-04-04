/* Calculate income tax paid by an employee to government, as per the slab mentioned below,*/
#include<stdio.h>
int main()
{
    int ai,tax;
    printf("Enter the salary : ");
    scanf("%d",&ai);
    if(ai > 250000 && ai < 500000)
    {
        tax = ai * 5 /100;
    }
    else if(ai > 500000 && ai < 1000000)
    {
        ai = ai - 500000;
        tax = ai * 20 / 100 + 25000;
    }
    else if(ai > 1000000 )
    {
        ai = ai - 1000000;
        tax = ai * 30 / 100 + 25000 + 100000;
    }
    printf("Total tax : %d",tax);
    return 0;
}