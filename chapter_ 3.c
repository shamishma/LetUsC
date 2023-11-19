#include<stdio.h>
int main()
{
    float price,qty,dis,total;
    printf("Enter the quantity :" );
    scanf("%f",&qty);
    printf("Enter the price : ");
    scanf("%f",&price);
    if(qty>1000)
    {
        dis = 10;
    }
    else
    {
        dis=0;
    }
    total = qty*price;
    total=total-total*dis/100;
    printf("total amount : %f ",total);
    return 0;
}