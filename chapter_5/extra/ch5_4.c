/*
Program

*/


#include <stdio.h>
int main()
{
  float sal;
printf("Enter the ry:");
scanf("%f",&sal);
((sal>=25000 && sal<=40000)?printf("Manager!"):(sal>15000 && sal<25000))? printf("Accountant!"):printf("clerk!");
 return 0;
}


