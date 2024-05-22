/* Suppose  there is a structure called employee that holds information like employee code,name and date of
joining.write a program to creat an array of structures and some data into it.Then ask the user to enter
current date,Display the names of those employees whose tenure is greater than equal to 3 years*/
#include <stdio.h>
#include <string.h>
#include <stdbool.h>
#define MAX_NAME_LENGTH 50
typedef struct
{
    int emp_code;
    char name[MAX_NAME_LENGTH];
    int join_year;
    int join_month;
    int join_day;
} Employee;
float calculateTenure(int current_year, int current_month, int current_day, Employee emp)
{
    int years = current_year - emp.join_year;
    if (current_month < emp.join_month || (current_month == emp.join_month && current_day < emp.join_day))
    {
        years--;
    }
    return years;
}
int main()
{
    Employee employees[5] = {
        {101, "John ", 2019, 4, 15},
        {102, "Alice ", 2018, 7, 20},
        {103, "Jimmy", 2017, 10, 5},
        {104, "Emily ", 2016, 12, 25},
        {105, "Michael ", 2020, 2, 10}};
    int current_year, current_month, current_day;
    printf("Enter current date (YYYY/MM/DD): ");
    scanf("%d/%d/%d", &current_year, &current_month, &current_day);
    printf("\nEmployees with tenure greater than or equal to 3 years:\n");
    for (int i = 0; i < 5; ++i)
    {
        float tenure = calculateTenure(current_year, current_month, current_day, employees[i]);
        if (tenure >= 3)
        {
            printf("%s\n", employees[i].name);
        }
    }

    return 0;
}
