#include<stdio.h>
int main()
{
    struct employee;
    {
        char name[10]; int age; float salary;
    }
    struct employee e1 ={"Sanjay",30,5500.00};
    struct employee e2,e3;
    /*piece employee copying*/
    strcpy(e2.name,e1.name);/* e2.name =e1.name is wrong*/
e2.age =e1.age;
s2.salary=e1.salary;
/*copying all elements at one go*/
e3=e2;
printf("%s %d %f\n",e1.name,e1.age,e1.salary);
printf("%s %d %f\n",e2.name,e2.age,e.salary);
printf("%s %d %f\n",e3.name,e3.age,e3.salary);
}