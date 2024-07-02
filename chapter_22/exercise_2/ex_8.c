/* */
#include <stdio.h>

struct data
{
    int day : 5;
    int month : 4;
    int year : 12;
};
struct data s;
int main()
{
    struct data s[10];
    for (int i = 0; i < 10; i++)
    {
        printf("Enter the day : ");
        scanf("%d\n", s[i].day);
        printf("Enter the month : ");
        scanf("%d\n", s[i].month);
        printf("Enter the year : ");
        scanf("%d\n", s[i].year);
    }

    return 0;
}