#include<stdio.h>
int main()
{
    char name[20];
    printf("Enter the name = ");
    scanf("%s",&name);
    // gets(name);(same as scanf)
    // scanf("%[^\n]s",&name);
    printf("%s",name );
    return 0;
}