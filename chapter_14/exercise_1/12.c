/*write a function to shift it circularly left by two positions.*/
#include <stdio.h>
int main()
{
    int array[6] = {1, 2, 3, 4, 5, 6};
    int temp[2];
    for (int i = 0; i < 2; i++)
    {
        temp[i] = array[i];
    }
    for (int i = 0; i < 6 - 2; i++)
    {
        array[i] = array[i + 2];
    }
    array[6 - 2] = temp[0];
    array[6 - 1] = temp[1];
    printf("Shifted Array (Circular Left by Two Positions):\n");
    for (int i = 0; i < 6; i++)
    {
        printf("%d ", array[i]);
    }
    printf("\n");

    return 0;
}
