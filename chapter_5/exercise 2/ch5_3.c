/*write a program for a matchstick game being played between the computer and a user. Your program should 
ensure that the compoter always wins. following the rule:
1 There are 21 matchstiks and the computer asks the player to pick 1,2,3or 4 matchstcks.
2 After the person picks,the computer does its picking and whoever is forced to pick
 up the last matchstick loses the game.*/
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