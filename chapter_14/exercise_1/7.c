/*How will you initialize a three-dimension array threed[3][2][3]? gow will you
 refer the first and last element in this array?*/
#include<stdio.h>
int main()
{
    int threed[3][2][3]={1,3,4,6,4,3,7,9,6,78,56,45,33,22,13,12,34,19};
    printf("The first element is %d !\n",threed[0][0][0]);
    printf("The last element is %d !\n",threed[2][1][2]);
    return 0;
}