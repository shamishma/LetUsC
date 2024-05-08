/* Exchange names using 2-D array of characters*/
#include <stdio.h>
int main()
{
    char names[][20] = {"akshay", "parag", "raman", "srinivas", "gopal", "rajesh"};
    int i;
    char t;
    printf("Original : %s %s\n", &names[2][0], &names[3][0]);
    for (i = 0; i <= 19; i++)
    {
        t = names[2][i];
        
        names[2][i] = names[3][i];
        names[3][i] = t;
    }
    printf("New      : %s %s\n", &names[2][0], &names[3][0]);
    return 0;
}