#include <stdio.h>
#include <string.h>
int main()
{
    char str1[] = "karishmasingh0219@gmail.com";
    char up[10]="12345";
    char sp[10]="12345";
    char str2[25];
    printf("Enter the E-mail id = ");
    gets(str2);
    printf("Enter user password = ");
    gets(up);
    // if (strcmp(str1, str2)==0)
    // if(strcmp(up,sp)==0)
    if(strcmp(str1,str2)+strcmp(up,sp)==0)
    {
        puts("login successfull !");
    }
    else
    puts("Incorrect mail Id !");

    return 0;
}