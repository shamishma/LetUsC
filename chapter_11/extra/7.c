/*External storage class*/
#include <stdio.h>
void fun();
int a = 5;
int main()
{
    printf("%d\n", a);
    fun();
    printf("%d\n", a);
    return 0;
}
void fun()
{
    printf("%d\n", a * 2);
    a = a * 3;
}