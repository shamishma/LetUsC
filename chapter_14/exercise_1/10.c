/*write a program to add two 6*6 matrix*/
#include<stdio.h>
int main()
{
    int arr1[6][6]={1,2,3,4,5,6,7,8,9,10,11,12,13,14,15,16,17,18,19,20,21,22,23,24,25,26,27,28,29,30,31,32,33,34,35,36};
    int arr2[6][6]={1,2,3,4,5,6,7,8,9,10,11,12,13,14,15,16,17,18,19,20,21,22,23,24,25,26,27,28,29,30,31,32,33,34,35,36};
    int i,j,k,arr3[6][6];
    for ( i = 0; i <6; i++)
    {
        for ( j = 0; j < 6; j++)
        {
            arr3[i][j]=arr1[i][j]+arr2[i][j];        
            }
    }
    for ( i = 0; i <6; i++)
    {
        for ( j = 0; j < 6; j++)
        {
            printf("%d\n",arr3[i][j]);
        }
        printf("\n");
    }
    return 0;
}