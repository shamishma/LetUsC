#include<stdio.h>
int main()
{
    char str1[]="Hello";
    // char str1[20]="Hello"; 
    *str1='z';
    char *p ="hello";
    puts(str1);
    // puts(p);
    return 0;
}