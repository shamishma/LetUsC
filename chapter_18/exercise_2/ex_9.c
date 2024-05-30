/* Find the error*/
#include <stdio.h>
int main()
{
    char text;
    sprintf(text, "%4d\t%2.2f\n%s", 12, 3.452, "Merry go Round");
    printf("%s\n", text);
    return 0;
}