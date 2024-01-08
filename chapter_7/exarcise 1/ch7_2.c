/*Dicision using break keywords*/
#include <stdio.h>
int main()
{
    int i = 3;
    switch (i)
    {
    case 1:
        printf(" I am in Business field !\n");
        break;
    case 2:
        printf(" I am in Education field !\n");
        break;
    case 3:
        printf(" I am in Health field !\n");
        break;
    case 4:
        printf(" I am in technical field !\n");
        break;
    defult:
        printf("I am not belong in this any field !");
    }
    return 0;
}