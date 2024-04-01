#include<stdio.h>
void fun(int *p,int size);
int main()
{
    int a[] = {8, 5, 10, 1, 3,4,5,4,48,452,5,54,54154,54,145,4154,45};
    int n;
    n = sizeof(a)/sizeof(a[0]);
    fun(a,n);
    return 0;
}
void fun(int *p,int size)
{
    for(int i=0;i<size;i++)
    {
        printf("%d ",i[p]);
        
    }
}