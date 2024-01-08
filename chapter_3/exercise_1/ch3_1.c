/* A Five digit number is enetered through the keyboard. Write a program
 to obtain the revered number and to determine whether the original and
  revered numbers are equal or not.  */
#include <stdio.h>
int main()
{
    int n1, n2, n3, n4, n5, t, n, num, big,sum;
    printf("Enter the number : ");
    scanf("%d", &num);
    t = num;
    n1 = t % 10;
    t = t / 10;
    n2 = t % 10;
    t = t / 10;
    n3 = t % 10;
    t = t / 10;
    n4 = t % 10;
    t = t / 10;
    n5 = t;
    
    if (n1 > n2)
        big = n1;
    else
        big = n2;

    if (n3 > big)
        big = n3;

    if (n4 > big)
        big = n4;

    if (n5 > big)
        big = n5;

    printf("big number : %d\n", big);
    n1=n1*10000;
    n2=n2*1000;
    n3=n3*100;
    n4=n4*10;
    n5=t;
    sum=n1+n2+n3+n4+n5;
    printf("sum : %d\n",sum);
    return 0;
}