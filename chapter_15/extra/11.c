#include<stdio.h>
int main()
{
    char str[10]="KARISHMA";
    char a;
    // for ( a = 0; a < 10; a++)
    // {
    //     if (str[a]>64 && str[a]<91)
    //     {
    //         str[a] = str[a]+32;
    //     }
    // }
    strlwr(str);
    puts(str);
    return 0;
}