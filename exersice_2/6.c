/*Find the output*/
#include <stdio.h>
void function(int *);
int main()
{
    int i = 35, *z;
    z = &i;
    *z = function(&i);
    printf("%d\n", *z);
    return 0;
}
void function(int *m)
{
    return (*m + 2);
}
