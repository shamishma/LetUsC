#include <stdio.h>
int main()
{
    int a[10] = {3, 4, 2, 1, 78, 45, 7, 9, 9, 10};
    int *p;
    p = &a[5];
    // printf("%d\n", *(p - 1));
    if (*(p)==*(p+1))
    {
         printf("Yes !");
    }
    else
    {
        printf("No !");
    }
    return 0;
}