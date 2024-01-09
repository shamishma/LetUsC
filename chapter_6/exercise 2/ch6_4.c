/*  Write a program to genrate all pythagorean trilets has with side
 lenght ss than or equal to 30.*/
#include<stdio.h>
int main()
{
    int l,b,h;
    for(l=1;l<=30;l++)
    {
        for(b=l;b<=30;b++)
        {
            for(h=1;h<=30;h++)
            {
                if(l*l + b*b == h*h)
                {
                    printf("Pythagorean triplets : %d*%d +  %d*%d = %d*%d\n",l,l,b,b,h,h);
                }
            }
        }
        
    }
    printf("\n");
    return 0;
}