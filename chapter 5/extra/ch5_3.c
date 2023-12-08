#include<stdio.h>
int main()
{
    int power = 1,num1,num2;
    printf("Enter the number 1 : ");
    scanf("%d",&num1);
    printf("Enter the number 2 : ");
    scanf("%d",&num2);
    while(num2>=1)
    {
        power = power * num1; 
        num2--;
    }
    printf("powered value is : %d",power);
    return 0;
}