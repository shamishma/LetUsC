#include <stdio.h>
#include<math.h>
int main()
{
  float t,v,wcf;
  printf("Enter value of t: ");
scanf("%f",&t);
printf("Enter value of v : ");
scanf("%f",&v);
wcf = 35.74+0.6215*t+(0.4275*t-35.75)*pow(v,0.16);
printf("wcf = :%.2f\n",wcf);
  return 0;
}

