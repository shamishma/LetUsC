/* Find the error*/
#include <stdio.h>
int main()
{
    char buffer[50];
    int no = 97;
    double val = 2.3417;
    char name[10] = "Shweta";
    sprintf(buffer, "%d %lf %s", no, val, name);
    printf("%s\n", buffer);
    sscanf(buffer, "%4d %2.2lf %s", &no, &val, name);
    printf("%s\n", buffer);
    printf("%d %lf %s\n", no, val, name);
    return 0;
}