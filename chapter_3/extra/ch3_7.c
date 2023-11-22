#include<stdio.h>
int main()
{
int n;
int n1,n2,n3,n4,n5,t,rn;
printf("Enter the number is : ");
scanf("%d",&n);
t=n;
// n1=t%10;
// n2=t%100;
// n2 = n2/10;
// n3 = t%1000;
// n3 = n3/100;
// n4 = t % 10000;
// n4 = n4 /1000;
// n5 = t / 10000;
n1 = t%10;
t = t/10;
n2 = t%10;
t = t/10;
n3 = t%10;
t = t/10;
n4 = t%10;
t = t/10;
n5 = t;
n1 = n1*10000;
n2 = n2*1000;
n3 = n3*100;
n4 = n4*10;
n5 = n5*1;
rn = n1+n2+n3+n4+n5;
printf("Original Number is : %d\n",n);
printf("Reversed Number is : %d\n",rn);
if(n==rn)
{
    printf("The reversed number is same as original number.");
}
else
{
    printf("The reversed number is not same as original number.");
}
    return 0;
}