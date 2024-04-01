#include<stdio.h>
int main()
{
    int i,sum=0;
    int arr[]={3, 5, 4,1, 45, 67 ,75,34, 9 ,34};
    for(i=0;i<10;i++)
    {
        printf(" Enter the total marks of students %d = ",i+1);
        scanf("%d",&arr[i]);
    }
for(i=0;i<10;i++)
{
    sum=sum+arr[i];
}
printf("Average percentage of class = %d%",(sum/10)/5);
    return 0;
}