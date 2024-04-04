/*Write a program to check whether a character entered by user is lower case or not.*/
#include <stdio.h>
int main()
{
    int c;
    printf("Enter the character =");
    scanf("%c", &c);
    if (c >= 97 && c <= 122)
        printf(" In the Lower case !");
        else
        printf(" Not a lower case !" );
    return 0;
}