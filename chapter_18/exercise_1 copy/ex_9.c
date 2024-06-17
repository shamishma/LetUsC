/* Use of gets and puts function*/
#include<stdio.h>
int main()
{
    char enjoy[40];
    puts("Enter name : ");
    gets(enjoy);
    puts("Happy! Enjoy your day");
    puts(enjoy);
    return 0;
}