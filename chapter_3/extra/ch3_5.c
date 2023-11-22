#include<stdio.h>
int main()
{
    float p,s,diff;
    printf("Enter the purchasing amount : ");
    scanf("%f",&p);
    printf("Enter the sailing amount    : ");
    scanf("%f",&s);
    
    if(s>p)
    {
        diff=s-p;
        printf("The sailer got profit of %.2frs\n",diff);
        
    }
    else
    {
        diff = p - s;
        printf("The sailer got loss of %.2frs\n",diff);
    }
    return 0;
}