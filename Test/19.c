/* write a program to create a menu by switch case, and in the menu,
 we have functionality to check this menu*/
#include <stdio.h>
#include <stdlib.h>
int main()
{
    int i, year, num;
    while (1)
    {
        printf("\n\nChose the option:\n");
        printf("1. Factorial\n");
        printf("2. prime number\n");
        printf("3. leap\n");
        printf("4. table\n");
        printf("5. Exit\n");
        printf("==> ");
        scanf("%d", &i);
        switch (i)
        {
        case 1:
            int fact = 1, num;
            printf("Enter the number : ");
            scanf("%d", &num);
            while (num >= 1)
            {
                fact = fact * num;
                num--;
            }
            printf("Factorial value is : %d", fact);
            break;
        case 2:
            printf("Enter a number : ");
            scanf("%d", &num);
            for (i = 2; i <= num - 1; i++)
            {
                if (num % i == 0)
                {
                    printf("Not a prime number !");
                    break;
                }
            }
            if (i == num)
            {
                printf("Prime number !\n");
            }
            break;
        case 3:
            printf("Enter the year : ");
            scanf("%d", &year);
            ((year % 400 == 0) || (year % 100 != 0) && (year % 4 == 0)) ? printf("It is a leap year!") : printf("It is not a leap year!");
            break;
        case 4:
            printf("Enter a number : ");
            scanf("%d", &num);
            printf("Table of %d:\n", num);
            for (i = 1; i <= 10; i++)
            {
                printf("%d x %d = %d\n", num, i, num * i);
            }
            break;
        case 5:
            exit(1);
        }
    }
    return 0;
}