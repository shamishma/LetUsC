/* Padding*/
#include <stdio.h>
int main()
{
    int weight = 63;
    printf("Weight id %d kg\n", weight);
    printf("Weight id %2d kg\n", weight);
    printf("Weight id %4d kg\n", weight);
    printf("Weight id %6d kg\n", weight);
    printf("Weight id %-6d kg\n", weight);
    printf("Weight id %1d kg\n", weight);
    return 0;
}