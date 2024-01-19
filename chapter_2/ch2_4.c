/* Wind -chill factor is the felt air temperature on exposed skin due to wind . The wind chill temperature
 is always lower than the air temperature , and is calculated as per the following formula:
 wcf=35.74+0.6215*t+(0.4275*t-5.75)* v^0.16.
 Where t is temperature and v is wind velocity .Write a program to print all its trignometric wind-chill factor(wcf) */
#include <stdio.h>
#include<math.h>
int main()
{
  float t,v,wcf;
  printf("Enter value of t: ");
scanf("%f",&t);
printf("Enter value of v  : ");
scanf("%f",&v);
wcf = 35.74+0.6215*t+(0.4275*t-35.75)*pow(v,0.16);
printf("wcf               :%.2f\n",wcf);
  return 0;
}

