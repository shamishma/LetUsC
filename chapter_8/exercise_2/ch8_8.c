#include <stdio.h>
int leap(int yr);
int main()
{
    int yr, p;
    printf("Enter the year: ");
    scanf("%d", &yr);
    p = leap(yr);
    if(p==1)
    printf("Leap year");
    else
    printf("Non leap year");
    return 0;
}
int leap(int yr)
{
    int result;
    result = ((yr % 400 == 0) || (yr % 100 != 0) && (yr % 4 == 0)) ? 1 : 0;
    return result;
}