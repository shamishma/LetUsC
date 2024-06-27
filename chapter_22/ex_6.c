#include <stdio.h>
int *fun();
int main()
{
    int *p,i;
    p = fun();
    printf("%d",i);
    return 0;
}
int *fun()
{
    static int i = 20;
    return (&i);
}