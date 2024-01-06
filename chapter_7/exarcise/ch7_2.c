#include <stdio.h>
int main()
{
    int i, x, y, add, sub, mul, div;
    printf(" Chose the option:\n ");
    printf("1. Addition\n");
    printf("2. subtraction\n");
    printf("3. Multiplication\n");
    printf("4. Division\n");
    scanf("%d", &i);
    switch (i)
    {
    case 1:
        printf("\n Enter the value x:");
        scanf("%d", &x);
        printf("\n Enter the value y:");
        scanf("%d", &y);
        add = x + y;
        printf(" Addition is %d !", add);
        break;
    case 2:
        printf("Enter the value x:\n");
        scanf("%d", &x);
        printf("Enter the value y:\n");
        scanf("%d", &y);
        sub = x - y;
        printf(" Subtraction is %d !", sub);
    case 3:
        printf("\n Enter the value x:");
        scanf("%d", &x);
        printf("\n Enter the value y:");
        scanf("%d", &y);
        mul = x * y;
        printf(" Multiplication is %d !", mul);
        break;
    case 4:
        printf("Enter the value x:\n");
        scanf("%d", &x);
        printf("Enter the value y:\n");
        scanf("%d", &y);
        div =x/y;
        printf(" Division is %d !", div);
    }
    return 0;
}