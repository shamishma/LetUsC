/*Write a program to alphabetically sort a set of stored using an array of 
pointers to strings*/
#include<stdio.h>
#include<string.h>
int main()
{
    char *str[]={"Rajesh","Ashish","Milind","Pusker","Akash"};
    char *t;
    int i,j;
    for ( i = 0; i < 5; i++)
    {
        for ( i = 0; i < 5; i++)
        {
            if((strcmp(str[i],str[j]))>0)
            {
                t=str[i];str[i]=str[j];str[j]=t;

            }
        }
        
    }
    for ( i = 0; i < 5; i++)
    {
        printf("%s\t",str[i]);
    }
    
    return 0;
}