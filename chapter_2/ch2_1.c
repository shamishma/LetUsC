/* If a five number is input through the keyboard, write a program to calculate the sum of its digits.
(Hint: Use the modules operator %)*/
#include<stdio.h>
int main()
{
    int num=45367;
    int n1,n2,n3,n4,n5,sum;
    n1=num%10;
    n2=num%100;
    n2=n2/10;
    n3=num%1000;
    n3=n3/100;
    n4=num%10000;
    n4=n4/1000;
    n5=num/10000;
    sum=n1+n2+n3+n4+n5;
    printf("%d",sum); 
    return 0;
}