/*Decision using switch*/
#include <stdio.h>
int main()
{
    int i = 2;
    switch (i)
    {
    case 1:
        printf("I am in apartment 1\n");
    case 2:
        printf(" I am in apartment 2\n");
    case 3:
        printf(" I am in apartment 3\n");
    case 4:
        printf(" I am in apartment 4\n");
    default:
        printf(" I am not in this apartment !\n");
    }
    return 0;
}         