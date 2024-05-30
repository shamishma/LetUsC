/* Find the error*/
#include<stdio.h>
int main()
{
    int dd,mm,yy;
    printf("Enter date in dd/mm/yy or dd-mm-yy format\n");
    scanf("%d%*c%d%*c%d",&dd,&mm,&yy);
    printf("The date is : %d-%d-%d\n",dd,mm,yy);
    return 0;
}