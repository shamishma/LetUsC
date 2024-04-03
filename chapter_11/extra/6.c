/*static class*/
#include<stdio.h>
void fun();
int main()
{
    fun();
    fun();
    fun();
    return 0;
}
void fun()
{
    static int a=1;
    a=a*2;
    printf("%d\n",a);
}