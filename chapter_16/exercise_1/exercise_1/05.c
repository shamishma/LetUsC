/*Search a string in a array*/
#include<stdio.h>
#include<string.h>
int main()
{
    char *str[]={
                 "We will teach you how to...","Move  a mountain","Level a building","Erase the past","Make a million",".... all through C !"};
                  char str1[100],*p;
                  int i;
                  printf("Enter string to be searched : ");
                  // scanf("%s",str1);
                  gets(str1);
                  p=NULL;
                  for ( i = 0; i <6; i++)
                  {
                    p=strstr(str[i],str1);
                    if(p!=NULL)
                    {
                        printf("%s found in the array",str1);
                        return 0;
                    }
                  }
                  printf("%s not found in the array",str1);
}
