/*File name ; prog1.c with infinite loop keyboard to display.*/
#include<stdio.h>
int main()
{
    char ch;
    while((ch=fgetc(stdin))!=EOF)
    fputc(ch,stdout);
    return 0;
}