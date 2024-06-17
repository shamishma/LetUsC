/*Write a file with the help of string*/
#include<stdio.h>
#include<string.h>
int main()
{
    FILE *p;
    char s[100];
    p=fopen("New.txt","w");
    if(p==NULL)
    {
        printf("Can not create file");
        return 0;
    }
    printf("Enter text here : ");
    while(strlen(gets(s))>0)
    {
        fputs(s,p);
        fputs("\n",p);

    }
    fclose(p);
}