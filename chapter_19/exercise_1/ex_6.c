/*writes /reads record to /from file in text/binary mode*/
#include <stdio.h>
int main()
{
    FILE *fp;
    struct emp
    {
        char name[40];
        int age;
        float bs;
    };
    struct emp e;
    char ch = 'y';
    fp = fopen("EMPLOYEE.DAT","w");
    while(ch == 'y' || ch == 'Y')
    {
        printf("Enter the name : ");
        scanf("%[^\n]s",e.name);
        // gets(e.name);
        printf("Entre the age : ");
        scanf("%d",&e.age);
        printf("Enter the salary : ");
        scanf("%f",&e.bs);
        getchar();
        fprintf(fp,"%s %d %f",e.name,e.age,e.bs);
        printf("Do You want to enter more data : ");
        scanf("%c",&ch);
        getchar();
    }
    fclose(fp);
    return 0;
}