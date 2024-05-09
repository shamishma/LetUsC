/* How many bytes in memory would be occupied by the following array of pointers to string?
how many bytes would be required to store the same strings in a two-dimensional character array?*/
#include <stdio.h>
int main()
{
    char *mess[] = {"Hammer and tongs", "Tooth and nail", "Spit and polish", "you and C"};
    char str[] = {" hello"};
    printf("%d", sizeof(str));
    printf("%d", sizeof(mess));/*17+15+16+10+16*/
    return 0;
}