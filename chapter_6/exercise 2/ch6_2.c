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