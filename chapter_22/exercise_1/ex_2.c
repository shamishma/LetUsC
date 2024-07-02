/*biggest number in series*/
#include<stdio.h>
#include<stdarg.h>
int func(int,...);
int main()
{
    int max;
    int b= 6,c = 9, d = 1, e = 4,f = 9,g = 15;
    max = func(6,b,c,d,e,f,g);
    printf("%d\n",max);
    
    return 0;
}
int func(int num,...)
{
    int max,count,n;
    va_list p;
    va_start(p,num);
    max = va_arg(p,int);
    for(int i = 1;i<num;i++)
    {
        n = va_arg(p,int);
        if(n > max)
        max = n;
    }
    return max;
}