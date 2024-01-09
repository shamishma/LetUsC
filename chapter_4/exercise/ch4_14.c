/* write a progam to calculate the salary as per the following table:*/
#include <stdio.h>
int main()
{
    char g, q;
    int yos, s;
    printf("Enter the gender : ");
    scanf("%c", &g);
    printf("Enter the year of service : ");
    scanf("%d", &yos);
    getchar();
    printf("Enter the qualification : ");
    scanf("%c", &q);
    if ((g == 'm') && (yos >= 10) && (q == 'p'))
    {
        s = 11000;
    }
    else if (g == 'm' && yos >= 10 && q == 'g')
    {
        s = 10000;
    }
    else if (g == 'm' && yos < 10 && q == 'p')
    {
        s = 10000;
    }
    else if (g == 'm' && yos < 10 && q == 'g')
    {
        s = 7000;
    }
    else if (g == 'f' && yos >= 10 && q == 'p')
    {
        s = 12000;
    }
    else if (g == 'f' && yos >= 10 && q == 'g')
    {
        s = 9000;
    }
    else if (g == 'f' && yos < 10 && q == 'p')
    {
        s = 10000;
    }
    else if (g == 'f' && yos < 10 && q == 'g')
    {
        s = 6000;
    }
    printf("salary is %d\n", s);
    return 0;
}