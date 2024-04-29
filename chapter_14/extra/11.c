#include <stdio.h>
int main()
{
    int a[2][3], i, j;
    printf("Enter array element\n");
    for (i = 0; i < 2; i++)
    {
        for (j = 0; j < 3; j++)
        {
            printf("Element [%d][%d]=", i, j);
            scanf("%d", &a[i][j]);
        }
    }
    printf("Array element\n");
    for (i = 0; i < 2; i++)
    {
        for (j = 0; j < 3; j++)
        {
            printf("%d\t", a[i][j]);
        }
        printf("%d\n");
    }

    return 0;
}
/* find address = (i*n+j)*size of base address*/