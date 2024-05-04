/* compares first n character of two strings without regard to case  */
#include <stdio.h>
#include <string.h>

int main()
 {
    char str1[] = "Hello";
    char str2[] = "heLLo World";
    
    // Compare the first 5 characters of str1 and str2 in a case-insensitive manner
    int result = strnicmp(str1, str2, 5);
    
    if (result == 0) 
    {
        printf("The first 5 characters are equal (case-insensitive).\n");
    } else 
    if (result > 0) 
    {
        printf("The first 5 character are not equal .");
    }
    return 0;
}
