#include<stdio.h>
int main()
{
    int a[10]={3, 5, 4,1, 45, 67 ,75,34, 9 ,34};
    int i,j,t;
    for( i=0;i<10;i++)
    {
        for(j=i+1;j<10;j++)
        {
            // if(a[i]<a[j])
            if(a[i]>a[j])
            {
                t=a[i];
                a[i]=a[j];
                a[j]=t;
            }
        }
    }
    for(i=0;i<10;i++)
    {
        printf("%d\n",a[i]);
    }
    return 0;
}