#include <stdio.h>
int main()
{
    int a,b,c;
    printf("Enter the value of n1 =");
    scanf("%d", &a);
    printf("Enter the value of n2 =");
    scanf("%d", &b);
    printf("Enter the value of n3 =");
    scanf("%d", &c);
    printf((a<b)?((a<c)?a:c):((b<c)?b:c));
    return 0;
}