/* To obtain the biggest of three numbers*/
#include <stdio.h>
#define big(x, y, z) (x > y && x > z) ? x : (y > z ? y : z);
int main()
{
    int x, y, z,b;
    printf("Enter the firs number   : ");
    scanf("%d", &x);
    printf("Enter the firs number   : ");
    scanf("%d", &y);
    printf("Enter the firs number   : ");
    scanf("%d", &z);
    b = big(x,y,z);
    printf("Biggest of three number : %d\n",b);
    printf("-----------------------------\n");
    return 0;
}