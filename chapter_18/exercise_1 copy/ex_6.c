/*Mismatching*/
#include <stdio.h>
int main()
{
    char ch = 'z';
    int i = 125;
    float a = 12.55;
    char s[] = "hello there !";
    printf("%c %d %f\n", ch, ch, ch);
    printf("%s %d %f\n", s, s, s);
    printf("%c %d %f\n", i, i, i);
    printf("%f %d\n", a, a);
    return 0;
}