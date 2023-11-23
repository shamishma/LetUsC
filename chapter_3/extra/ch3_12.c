#include<stdio.h>
int main()
{
    int a,b,c,big;
    printf("Enter a variable : ");
    scanf("%d",&a);
    printf("Enter b variable : ");
    scanf("%d",&b);
    printf("Enter c variable : ");
    scanf("%d",&c);
    if(a>b)
    {
        if(a>c)
        big=a;
        else
        big = c;
        
    }
    else
        {
          if(b>c)
          big=b;
          else
            big=c;  
        }
    printf("%d\n",big);
    return 0;
}