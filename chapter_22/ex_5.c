/*Pointer to function */
#include<stdio.h>
void display();
int main()
{
    void(*ptr)();
    ptr = display;
    printf("Address of function display is %u\n",ptr);
    (*ptr)();
    display();
    return 0;
}
void display()
{
    printf("Long live excellence !!\n");
}