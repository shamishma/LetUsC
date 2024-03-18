#include<stdio.h>
#include<stdlib.h>
int main()
{
     int *p;
    p= (int *)malloc(1*sizeof(int));
    *p = 10;
    printf("%d",*p);
    free(p);
    return 0;
}