#include<stdio.h>
void fun(int);
int main()
{
    int a = 30;
    fun(a);
    printf("%d\n",a);
    return 0;
}
void fun(int x)
{
    x = 60;
    printf("%d\n",x);
    main();
}