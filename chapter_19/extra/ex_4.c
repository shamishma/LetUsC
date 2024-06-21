#include<stdio.h>
int main(int arg,char *argv[])
{
    if(arg==2)
    {
        FILE *p;
        char ch;
        p=fopen(argv[1],"r");
        while(1)
        {
            ch=fgetc(p);
            printf("%c",ch);
            if(ch==EOF)
            break;
        }
        fclose(p);
    }
    else
    {
        printf("please enter correct prompt");
    }
    return 0;
}