/* Decision using goto*/
#include <stdio.h>
int main()
{
    int goals;
    printf("Enter the number of goals scored againts INDIA\n");
    scanf("%d", &goals);
    if (goals <= 5)
        goto a;
    else
    {
        printf("About time soccer player learnt C\n");
        printf("And said good bye to soccer !\n");
        exit(1);
    }
a:
    printf("To error is human !");
    return 0;
}