/* whether the character entered through thr keyboard is a lower case alphabet 
 and special symbol or not.*/
#include <stdio.h>
int main()
{
    int x;
    printf("Enter the number = ");
    scanf("%c", &x);
    if (x >= 65 && x <= 90)
        printf("It is capital case ! ");
    else if (x >= 97 && x <= 122)
        printf("It is small case ! ");
    else if (x >= 48 && x <= 57)
        printf("It is a digit ! ");
    else if ((x >= 0 && x <= 47) || (x >= 58 && x <= 64) || (x >= 91 && x <= 96) || (x >= 123 && x <= 127))
        printf("It is a special symbol ! ");
    return 0;
    
}