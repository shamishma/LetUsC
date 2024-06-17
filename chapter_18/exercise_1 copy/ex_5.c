/*Ignoring character*/
#include <stdio.h>
int main()
{
    int dd, mm, yy;
    printf("Enter data in dd/mm/yy or dd.mm.yy or dd-mm-yy format = ");
    scanf("%d%*c%d%*c%d", &dd, &mm, &yy);
    printf("Correct formate of the date : ");
    printf("%d/%d%/%d\n", dd, mm, yy);
    return 0;
}