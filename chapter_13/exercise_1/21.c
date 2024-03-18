#include<stdio.h>
#include<stdlib.h>
int main()
{
     int *p;
    p= (int *)malloc(5*sizeof(int));
    *p = 10;
    *(p+1)=20;
    printf("%d ",*p);
    printf("%d ",*(p+1));
    free(p);
    return 0;
}