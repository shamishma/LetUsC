/*Find the output*/
#include<stdio.h>
int main()
{
    enum status{pass,fail,atkt};
    enum status stud1,stud2,stud3;
    stud1=pass;
    stud1=fail;
    stud1=atkt;
    printf("%d\n%d\n%d\n",stud1,stud2,stud3);
    return 0;
}