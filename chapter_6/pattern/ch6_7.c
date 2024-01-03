#include<stdio.h>
int main()
{
    int i,j,k,row,column;
    printf("\n Enter the row : ");
    scanf("%d",&row);
    int x =1;
    char c=97;
    for(i=1;i<=row*2;i++)
    {
        if(i%2!=0)
        {
            for(k=row;k>=x;k--)
            {
                printf("  ");
            }
            for(j=1;j<=i;j++)
            {
                printf("%c ",c);
                c++;
            }
            printf("\n");
            x++;
            
        }
        
    }
    return 0;
}