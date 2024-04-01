#include<stdio.h>
void fun(int*p);
int main()
{
    int a[]={8,5,10,1,3,4,12,78,4,9};
    fun(a);
    return 0;
}
void fun(int*p)
{
    for(int i=0;i<10;i++)
    {
        printf("%d\n",i[p]);
    }
}

