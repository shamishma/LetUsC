#include<stdio.h>
int main()
{
    int i,j,k;
int row;
printf("Enter the row:");
scanf("%d",&row);
printf("The pattern is:\n");
for(i=1;i<=row;i++)
    {
        for(j=2;j<=i;j++)
        {
            printf(" ");
        }
        for(k=row;k>=i;k--)
       {
         printf("* ");
       }
        printf("\n");
    }  
return 0;
}
