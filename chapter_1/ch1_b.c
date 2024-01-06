#include <stdio.h>
int main()
{
  float l,w, perimeter,area;
printf("\n Length of rectangle in cm = ");
scanf("%f",&l);
printf("\n Width of rectangle in cm = ");
scanf("%f",&w);
perimeter=2*(l+w);
area=l*w;
printf("-------------\n");
printf("\n The perimeter of rectangle:%.2f", perimeter);
printf("\n The area of rectangle:%.2f",area);
  return 0;
}