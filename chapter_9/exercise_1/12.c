#include<stdio.h>
#include<math.h>
int fact(float x);
int main()
{
    int j=1,i=1;
    float x,term=5,p,f,a,sum;
    printf("Enter the number = ");
    scanf("%f",&x);
    for(i=1;i<=term;i++)
    {
        p=pow(x,j);
        f=fact(j);
        a=p/f;
        (i%2==0)?(sum =sum-a):(sum =sum+a);
        j=j+2;
    }
    printf("Sum =%f",sum);
    return 0;
}
int fact(float x)
{
int i,fact=1;
for(i=1;i<=x;i++)
{
    fact=fact*i;
}
return(fact);
}
    