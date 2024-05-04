#include<stdio.h>
int main()
{
    char arr[6]={'A','P','P','L','E','\0'};/*same as =char arr[6]="APPLE";*/
    char *p;
    p=arr;
    while(*p!='\0')
    {
        printf("%c",*p);
        p++;
    }
    // printf("%s",arr);
    return 0;
}