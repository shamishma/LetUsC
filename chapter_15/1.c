#include<stdio.h>
int main()
{
    char arr[6]={'A','P','P','L','E','\0'};
    int i;
    for( i = 0; i <6; i++)
    {
        printf("%c",arr[i]);
    }
    
    return 0;
}