#include <stdio.h>
void fun1();
void fun2();
int main()
{
    while (1)
    {
        int num;
        printf("Choose any option!\n");
        printf("1.Factorial\n");
        printf("2.prime or not\n");
        printf("3.leep year\n");
        printf("4.Exit\n");
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
            goto ex;
            break;
        }
    }
ex:
    return 0;
}

void fun1()
{
    int i;
    int num, fact = 1;
    printf("Enter the number : ");
    scanf("%d", &num);
    for (i = num; i >= 1; i--)
    {
        fact = fact * i;
    }
    printf("Factorial of %d is %d !", num, fact);
    return 0;
}
void fun2()
{
    int num, i;
    printf("Enter a number : ");
    scanf("%d", &num);
    for (i = 2; i <= num - 1; i++)
    {
        if (num % i == 0)
        {
            printf("Not a prime number!");
            break;
        }
    }
    if (i == num)
    {
        printf("Prime number!");
    }
    return 0;
}
void fun3()
{
    int year;
    printf("Enter the year : ");
    scanf("%d", &year);
    ((year%400==0)||(year%100!=0)&&(year%4==0))?
    printf("It is a leap year !"):printf("It is not a leap year !");
}