#include<stdio.h>
void square(int l);
int main()
{
     int l,s;
     printf("Enter the length of square = ");
     scanf("%d",&l);
     square(l);
   return 0;
}
void square(int l)
{
  int i,j;
  for(i=0;i<l;i++)
  {
    for(j=0;j<l;j++)
    {
      printf(" * ");
    }
    printf("\n");
  }

}
