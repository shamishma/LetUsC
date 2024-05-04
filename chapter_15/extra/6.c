#include <stdio.h>
int main()
{
    char name[15];
    char n[10];
    printf("Enter the name = ");
    gets(name);
    printf("Enter the name = ");
    gets(n);
    // printf("%s",name);
    puts(name); /*Same as printf*/
    puts(n); /*Same as printf*/
    return 0;
}