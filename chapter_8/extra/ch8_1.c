/*Use of function.*/
#include <stdio.h>
void fun1();
void fun2();
void fun3();
void fun4();
int main()
{

    while (1)
    {
        int num;
        printf("Choose any option!\n");
        printf("1.Addition\n");
        printf("2.Subtraction\n");
        printf("3.Multiplication\n");
        printf("4.Deviation\n");
        printf("5.Exit\n");
        printf(":::> ");
        scanf("%d", &num);
        switch (num)
        {
        case 1:
            fun1();
            break;
        case 2:
            fun2();
            break;
        case 3:
            fun3();
            break;
        case 4:
            fun1();
            break;
        case 5:
            goto ex;
            break;
        }
    }
ex:
    return 0;
}
void fun1()
{
    int a, b, sum;
    printf("Enter the first number = ");
    scanf("%d", &a);
    printf("Enter the second number = ");
    scanf("%d", &b);
    sum = a + b;
    printf("The sum is %d!\n", sum);
    return 0;
}
void fun2()
{
    int a, b, sub;
    printf("Enter the first number = ");
    scanf("%d", &a);
    printf("Enter the second number = ");
    scanf("%d", &b);
    sub = a - b;
    printf("The subtraction is is %d!\n", sub);
    return 0;
}
void fun3()
{
    int a, b, mul;
    printf("Enter the first number = ");
    scanf("%d", &a);
    printf("Enter the second number = ");
    scanf("%d", &b);
    mul = a * b;
    printf("The multiplication is %d!\n", mul);
    return 0;
}
void fun4()
{
    int a, b, divide;
    printf("Enter the first number = ");
    scanf("%d", &a);
    printf("Enter the second number = ");
    scanf("%d", &b);
    divide = a / b;
    printf("The division is is %d!\n", divide);
    return 0;
}