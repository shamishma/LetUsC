#include<stdio.h>
int main()
{
    int bs,da,hra,total;
    printf("Enter the basic salary : ");
    scanf("%d",&bs);
    if(bs<1500)
    {
        da=bs*10/100;
        hra=bs*90/100;
    }
    else
    {
        hra=500;
        da=bs*98/100;
    }
    total=da+hra+bs;
printf("Total salary is : %d\n",total);
    return 0;
}