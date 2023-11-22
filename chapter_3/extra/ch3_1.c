#include<stdio.h>
int main()
{
    float a,b,result;
    printf("Enter the first number  : "); 
    scanf("%f",&a);
    printf("Entre the second number : ");
    scanf("%f",&b);
    result=a*b;
    printf("The result is : %.2f\n",result);
    if(result>100)
    {
        printf("The result is grater than hundred \n"); 
    }
    else
    {
        printf("The result is less than hundred\n");
    }
       return 0;
}