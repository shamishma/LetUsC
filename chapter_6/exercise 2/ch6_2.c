/* According to a study , the approximate level of intelligence of a
 person can be calculatedusing the formula(i=2+(y+0.5*x) write a program 
 that will produse a table of values of i,y and x where y varies from 1
  to 6, and for each valus of y,x varies from 5.5 to 12.5 in steps of 0.5.*/
#include <stdio.h>
int main()
{
    int y;
    float x, i;
    for (x = 5.5; x <= 12.5; x = x + 0.5)
    {
        for (y = 1; y <= 6; y++)
        {
            i = 2 + (y + 0.5 * x);
            printf("Intelligence of person when x = %.2f and y = %d : %.2f\n",x,y,i);
        }
        
    }
    return 0;
}