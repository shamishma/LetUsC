/*Temperature of a city in fahrenheit degree is input through the keyboard.
Write to convert this tempature into cntigrade degrees.*/
#include <stdio.h>
int main()
{
  float f, c;
  printf("Enter temp in f :");
  scanf("%f", &f);
  c = (f - 32) * 5 / 9;
  printf("\nTemperature of two cities in c is                 : %f", c);
   return 0;
}
