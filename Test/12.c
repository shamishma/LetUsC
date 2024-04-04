/* Entered number is prime or not .*/
#include <stdio.h>
int main()
{
  int num, i;
  printf("Enter a number : ");
  scanf("%d", &num);
  for (i = 2; i < num ; i++)
  {
    if (num % i == 0)
    {
      printf("Not a prime number!");
      break;
    }
  }
  if (i == num)
  {
    printf("Prime number!");
  }
  return 0;
}
