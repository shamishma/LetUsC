/*write a program to multiply any two 3*3 matrix*/
#include<stdio.h>
int main()
{
    int arr1[3][3]={1,2,3,4,5,6,7,8,9};
    int arr2[3][3]={1,2,3,4,5,6,7,8,9};
    int i,j,k,arr3[3][3];
    for ( i = 0; i <3; i++)
    {
        for ( j = 0; j < 3; j++)
        {
            arr3[i][j]=arr1[i][j]*arr2[i][j];        
            }
    }
    for ( i = 0; i <3; i++)
    {
        for ( j = 0; j < 3; j++)
        {
            printf("%d\n",arr3[i][j]);
        }
        printf("\n");
    }
    return 0;
}