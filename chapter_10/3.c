#include<stdio.h>
int fun();
int x=1;
int main()
{
    fun();
    return 0;
}
int fun()
{
    printf("Hi ");
    x++;
    if(x==10)
    {
        return 0;
    }
    else
    {
        fun();
    }
}