/* variable should be declared as extern*/
#include<stdio.h>
int i=35;
int fun1();
int fun2();
int main()
{
    printf("%d\n",i);
    fun1();
    fun2();
    return 0;
}
#include<stdio.h>
extern int i;
int fun1()
{
    i++;
    printf("%d\n",i);
    return 0;
}
int fun2()
{
    i--;
    printf("%d\n",i);
    return 0;
}