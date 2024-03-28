#include<stdio.h>
void modify(int *p);
void printing(int *a);
int main()
{
    int arr[10] = {1,5,8,12,3,2,7,15,20,21};
    printing(arr);
    modify(arr);
    printing(arr);
    return 0;
}
void modify(int *p)
{
    int i;
    for(i=0;i<10;i++)
    {
        *(p+i) = *(p+i) * 3;
    }
}
void printing(int *a)
{
    int i ; 
    for(i = 0;i<10;i++)
    {
        printf("%d ",*(a+i));
    }
    printf("\n");
}