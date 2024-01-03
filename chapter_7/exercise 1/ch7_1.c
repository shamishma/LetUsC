
#include <stdio.h>
int main()
{
    int i = 4;
    switch (i)
    {
    case 1:
        printf("I am in apartment 1\n");
        break;
    case 2:
        printf(" I am in apartment 2\n");
        break;
    case 3:
        printf(" I am in apartment 3\n");
        break;
    case 4:
        printf(" I am in apartment 4\n");
        break;
    default:
        printf(" I am not in this apartment !\n");
    }
    return 0;
}         