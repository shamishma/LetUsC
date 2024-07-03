/* */
#include <stdio.h>

struct data
{
    unsigned day : 5;
    unsigned month : 4;
    unsigned year : 12;
};
struct data s;
int main()
{
    int d, m, y;
    struct data s[3];

    for (int i = 0; i < 3; i++)
    {
        printf("Enter the  %d employee data \n", i + 1);
        printf("Enter the day   : ");
        scanf("%d", &d);
        printf("Enter the month : ");
        scanf("%d", &m);
        printf("Enter the year  : ");
        scanf("%d", &y);
        s[i].day = d;
        s[i].month = m;
        s[i].year = y;
    }
    struct data temp;
    for (int i = 0; i < 3; i++)
    {
        for (int j = i + 1; j < 3; j++)
        {
            if (s[i].year > s[j].year ||
                (s[i].year == s[j].year && s[i].month > s[j].month) ||
                (s[i].year == s[j].year && s[i].month == s[j].month && s[i].day > s[j].day))
            {
                temp = s[i];
                s[i] = s[j];
                s[j] = temp;
            }
        }
    }

    for (int i = 0; i < 3; i++)
    {
        printf("\nEmployee data !! \n");
        printf("Day   = %d\n", s[i].day);
        printf("Month = %d\n", s[i].month);
        printf("Year  = %d\n", s[i].year);
    }
    return 0;
}