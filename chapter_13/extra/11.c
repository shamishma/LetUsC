#include<stdio.h>
int main()
{
    float x[]={34,3,212,56,87,87,3,56,74,90,7,675,4,33,33,56,88,98,56,22,1,2};
    float y[]={122,34,23,46,78,8,56,89,90,67,76,98,87,43,45,66,44,32,31};
    int n,i;
    n=sizeof(y)/sizeof(y[0]);
    n=sizeof(y);
    printf("%d",n);
    return 0;
}