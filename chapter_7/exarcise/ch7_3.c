#include <stdio.h>
int main()
{
    char ch;
    float x,y,sum,division;
    printf("Enter any of the alphabets a,b=");
    scanf("%c", &ch);
    switch (ch)
    {
    case 'a':
    case 'A':
        printf("\n Enter the value x : ");
        scanf("%f",&x);
        printf("\n Enter the value y : ");
        scanf("%f",&y);
        sum=x+y;
        printf("Sum is %.2f !",sum);
        break;
    case 'b':
    case 'B':
        printf("\n Enter the value x : ");
        scanf("%f",&x);
        printf("\n Enter the value y : ");
        scanf("%f",&y);
        division=x/y;
        printf("Division is %.2f !",division);
        break;
    default:
        printf("Chose a correct alphabet !\n");
        return 0;
    }
}