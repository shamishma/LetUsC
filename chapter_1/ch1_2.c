/* The lenght and breath of a rectangle and radius of a circle are input through the keyboard.
write a program to calculate the area and perimeter of the  rectangle,and the area and circumference of the circle.*/
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