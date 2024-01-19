#include <stdio.h>
#include "myfun.karishma"
int main()
{
    float f,c;
    printf("Enter temp in f :");
    scanf("%f", &f);
    c = temp(f);
    printf("%f",c);
    return 0;
}
