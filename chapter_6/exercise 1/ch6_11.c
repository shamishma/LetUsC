#include <stdio.h>
int main()
{
    int n;
    char ch = 'y';
    while (1)
    {
        if (ch == 'y')
        {
            printf("Enter the number :");
            scanf("%d", &n);
            printf("Square of the number is : %d\n ", n * n);
        }
        else
        {
            printf("Please enter A valid source !\n");
        }
        getchar();
        printf("Do you want to check more\n:");
        scanf("%c", &ch);
        if (ch == 'n')
            break;
    }
    return 0;
}