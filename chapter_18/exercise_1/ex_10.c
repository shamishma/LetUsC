/*Uses of fgets function*/
#include<stdio.h>
int main()
{
    char str[20];
    puts("Enter a string : ");
    fgets(str,20,stdin);
    puts(str);
    return 0;
}