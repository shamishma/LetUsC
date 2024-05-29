/*Use f fgetchar function */
#include<stdio.h>
#include<conio.h>
int main()
{
    int a;
    char ch;
    printf("Enter the number : ");
    scanf("%d",&a);
    ch = fgetchar();
    printf("Integer = %d\n",a);
    printf("Character = %c\n",ch);
    return 0;
}