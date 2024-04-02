#include <stdio.h>
int main()
{
    int a, b;
    printf("%lld %lld\n", &a, &b);
    printf("%p %p\n", &a, &b);
    printf("%d %d\n", &a, &b);
    return 0;
}