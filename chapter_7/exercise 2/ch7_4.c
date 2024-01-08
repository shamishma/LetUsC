/*Find the output.*/
#include <stdio.h>
int main()
{
    int k;
    float j = 2.0;
    switch (k = j + 1)
    {
    case 3:
        printf("Trapped!\n");
        break;
    defult:
        printf("Caught!\n");
    }
    return 0;
}