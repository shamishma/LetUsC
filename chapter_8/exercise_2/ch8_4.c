/*Find the output .*/
#include <stdio.h>
int addmulti(int, int);
int main()
{
    int i = 3, j = 4, k, l;
    k = addmulti(i, j);
    l = addmulti(i, j);
    printf("%d %d\n", k, l);
    return 0;
}
int addmulti(int x, int y)
{
    int u, v;
    u = x + y;
    v = x + y;
    return (v);
}