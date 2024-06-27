#include<stdio.h>
int main()
{
    unsigned char ch=32,dh;
    dh=~ch;
    printf("~ch = %d\n",dh);
    printf("~ch = %x\n",dh);
    printf("~ch = %X\n",dh);
    printf("~ch = %#X\n",dh);
    return 0;
}