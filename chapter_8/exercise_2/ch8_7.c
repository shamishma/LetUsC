#include<stdio.h>
int main()
{
  int num,i=2;
  printf("Enter the number = ");
  scanf("%d",&num);
  while(num!=1)
  {
    if(num%i==0)
    {
      printf("%d ",i);
      num = num/i;
    }
    else
    {
      i++;
    }
  }
  return 0;
}