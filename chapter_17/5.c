#include <stdio.h>
#include<string.h>
int main()
{
    struct employee
    {
        char name[10];
        int age;
        float salary;
    };
    struct employee e1 = {"Sanjay", 30, 5500.00};
    struct employee e2, e3;
    strcpy(e2.name,e1.name);
    e2.age = e1.age;
    e2.salary = e1.salary;
    e3 = e1;
    printf("%s %d %.2f\n", e1.name, e1.age, e1.salary);
    printf("%s %d %.2f\n", e2.name, e2.age, e2.salary);
    printf("%s %d %.2f\n", e3.name, e3.age, e3.salary);
}