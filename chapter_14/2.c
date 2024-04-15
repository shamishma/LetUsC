#include<stdio.h>
int main()
{
    int i,j;
   int arr[4][2]={{1,2},{3,4},{5,6},{7,8}};
    for(i=0;i<4;i++)
    {
        for(j=0;j<2;j++)
        {
            printf("%d\n",arr[i][j]);
        }
    }
    return 0;
}