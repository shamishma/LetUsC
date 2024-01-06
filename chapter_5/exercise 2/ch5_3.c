#include <stdio.h>
int main()
{
    int n = 21, cp, up;
    while (n > 1)
    {
        printf("Choose matchsticks between 1 to 4 : ");
        scanf("%d", &up);
        if (up <= 0 || up > 4)
        {
            printf("Please choose a valid number!\n");
        }
        else
        {
            n = n - up;
            printf("%d left \n", n);
            printf("Computer Picked the number : ");
            cp = 5 - up;
            n = n - cp;
            printf("%d\n", cp);
            printf("%d left \n", n);
            if (n == 1)
            {
                printf("Last matchstick left and you lose the game!");
            }
        }
    }
    return 0;
}