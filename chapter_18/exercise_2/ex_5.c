/*Find the error*/
#include<stdio.h>
int main()
{
    int i=0;
    char a[]="Hello";
    // while(a!='\0')
    while(a[i]!='\0')
    {
        // printf("%c",*a);
        printf("%c",a[i]);
        // a++;
        i++;
    }
    return 0;
}
