#include <stdio.h>
int leap(int yr);
int main()
{
    int yr, p;
    printf("Enter the year:\n");
    scanf("%d", &yr);
    p = leap(yr);
    return 0;
}
int yr()
{
    int yr;
    ((yr % 400 == 0) || (yr % 100 != 0) && (yr % 4 == 0)) ? printf("It is a leap year!") : printf("It is not a leap year!");

}