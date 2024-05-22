/* Define a function that compares two given dates . To store a date,use a structure that contains
three members namely day,month and year.If the dates are equal the function should return 0,
otherwise it should return 1.*/
#include <stdio.h>
struct Date
{
    int day;
    int month;
    int year;
};
int compareDates(struct Date date1, struct Date date2)
{
    if (date1.year == date2.year && date1.month == date2.month && date1.day == date2.day)
    {
        return 0;
    }
    else
    {
        return 1; 
    }
}

int main()
{
    struct Date date1, date2;
    int choice, result;

    while (1)
    { 
        printf("Menu:\n");
        printf("1. Enter  first date \n");
        printf("2. Enter second date \n");
        printf("3. Compare both dates\n");
        printf("4. Exit\n");
        printf("--------------------------\n");
        printf("Enter your choice: ");
        scanf("%d", &choice);

        if (choice == 1)
        {
            printf("Enter date 1 (dd/mm/yyyy): ");
            scanf("%d/%d/%d", &date1.day, &date1.month, &date1.year);
        }
        else if (choice == 2)
        {
            printf("Enter date 2 (dd/mm/yyyy): ");
            scanf("%d/%d/%d", &date2.day, &date2.month, &date2.year);
        }
        else if (choice == 3)
        {
            result = compareDates(date1, date2);
            if (result == 0)
            {
                printf("The dates are equal !\n");
                printf("***************************\n");
            }
            else
            {
                printf("The dates are not equal !\n");
                printf("*******************************\n");
            }
        }
        else if (choice == 4)
        {
            printf("Exiting program.\n");
            break; // Exit the loop
        }
        else
        {
            printf("Invalid choice! Please enter a valid option.\n");
        }
    }

    return 0;
}
