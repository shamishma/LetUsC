/* Calculate the output.*/
#include <stdio.h>
int main()
{
  int x=3,y,z;
 y=x=10;
z=x<10;
if(x==y)
  printf("x=%d y=%d z=%d\n",x,y,z);  
return 0;
}