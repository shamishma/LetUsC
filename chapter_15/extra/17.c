/*compares two string by ignoring the case*/
#include <stdio.h>
#include <string.h>
int main() 
{
    char str1[] = "Hello";
    char str2[] = "hello";
    int compare = strcasecmp(str1, str2);
    if (compare == 0)
     {
        printf("str1 and str2 are equal.\n");
    } 
    
   return 0;
}
