#include <stdio.h>
int main()
{
    int temp;
    printf("Enter the temp =\n");
    scanf("%d", &temp);
    {
        if (temp <= 20)
        {
            printf("Oooooohhhh! Damn cool !\n");
        }
        else if (temp >= 20 && temp <= 30)
        {
            printf("Rain rain here again !\n");
        }
        else if (temp >= 30 && temp <= 40)
        {
            printf("Wish i am on everest!\n ");
        }
        else
            printf("Good old nagpur weather!\n");
    }
    return 0;
}