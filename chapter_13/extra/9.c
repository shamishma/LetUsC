#include<stdio.h>
int main()
{
    int a[10]={1,2,3,4,5,6,7,8,9,10};
    int*p;
    p= &a[7];
    p=a;
    printf("%d\n",*(p));
    printf("%d\n",*(p+1));
    printf("%d\n", *(p - 1));
    return 0;
}