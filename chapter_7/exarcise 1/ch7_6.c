/* Control out the loop that is contained in several other loops.*/
#include<stdio.h>
int main()
{
    int i,j,k;
    for(i=1;i<=3;i++)
    {
        for(j=1;j<=3;j++)
        {
            for(k=1;k<=3;k++)
            {
                if(i==2 && j==2 && k==2)
                goto out;
                else
                printf("%d %d %d\n",i,j,k);
            }
        }
    }
    out:
    printf("Out o the loop at last !");
    return 0;
}