/* compares first n characters of two strings.*/
#include <stdio.h>
#include <string.h>
int main()
{
    int n;
    char str1[] = "hello";
    char str2[] = "hellen";
    printf("Enter how many characters you wan to match : ");
    scanf("%d",&n);
    if (strncmp(str1, str2, n) == 0)
    {
        printf(" first %d character are matched.\n",n);
    }
    else
    {
        printf("character are not matched .\n");
    }

    return 0;
}
