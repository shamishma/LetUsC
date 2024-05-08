#include<stdio.h>
#include<string.h>
int main()
{
    char str[30]="Working is fun";
    int i;
    char str2[10];
    int k=0;
    for ( i = 3; i < 7; i++)
    {
        str2[k]=str[i];
        k++;
    }
    str2[k]='\0';
    printf("%s",str2);
    return 0;
}