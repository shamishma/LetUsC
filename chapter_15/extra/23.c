/*finds first occurrence of a given string in another string*/
#include <stdio.h>
#include <string.h>
int main()
 {
    const char *str = "oh waoo! i like this game .";
    // const char *substr = "like";
    const char *substr = "food";
        char *result = strstr(str, substr);
    if (result != NULL) 
    {
        printf("'%s' found at position: %ld\n", substr, result - str);
    } else 
    {
        printf("'%s' not found in the string.\n", substr);
    }
        return 0;
}
