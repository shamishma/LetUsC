#include<stdio.h>
int*fun(int*a);
int main()
{
    int*p,n,i;
    p=fun(&n);
    for(i=0;i<n;i++)
    {
        printf("%d\n",p[i]);
    }
    return 0;
}
int*fun(int*a)
{
    static int arr[] ={1,8,9,1,5,6,7,1,1,5,10,6,56,56,56};
    *a = sizeof(arr)/sizeof(arr[0]);
    return arr;
}