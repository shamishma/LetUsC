#include <stdio.h>
int main()
{
    int x;
    printf("Enter number : ");
    scanf("%d",&x);
    int num=1,i,count;
    while (num<=100)
    {
        i = 1,count = 0;
        while(i<=num)
        {
            if(num%i==0)
            count++;
            i++;
        }
        if(count==2)
        {
            if(x%num==0)
            {
                printf("%d ",num);
            }
        }
        
        num++;
    }
    
    
    return 0;
}
