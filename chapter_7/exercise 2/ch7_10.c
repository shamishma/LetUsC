/**/
#include <stdio.h>
int main()
{
    int c, f, grace = 0;
    printf(" Enter the class : ");
    scanf("%d", &c);
    switch (c)
    {
    case 1:
        printf("Enter the number of subjects in which he fail=\n");
        scanf("%d", &f);
        if (f < 4)
        {
            grace = f * 5;
        }
        printf("Total grace he got = %d", grace);
        break;
    case 2:
        printf("Enter the number of subjects in which he fail=\n");
        scanf("%d", &f);
        if (f < 3)
        {
            grace = f * 4;
        }
        printf("Total grace he got = %d", grace);
        break;
    case 3:
        printf("Enter the number of subjects in which he fail=\n");
        scanf("%d", &f);
        if (f < 2)
        {
            grace = f * 5;
        }
        printf("Total grace he got = %d", grace);
        break;
    }
    return 0;
}