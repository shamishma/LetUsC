#include<stdio.h>
void modify(int*p);
void modify2(int p[]);
int main()
{
    int arr[10] = { 5,7,8,2,45,12,9,3,1,4};
    modify(arr);
    // modify(arr);
    int i;
    for(i=0;i<10;i++)
    {
        printf("%d\n",arr[i]);
    }
    return 0;
}
void modify(int*p)
{
    int i;
    for(i=0;i<10;i++)
    {
        *(p+i) = *(p+i)*3;
    }
}
void modify2(int p[])
{
    int i;
    for(i=0;i<10;i++)
    {
        p[i] = p[i]*3;
    }
}