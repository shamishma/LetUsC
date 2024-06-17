/*write a program that uses low level file input/output function */
#include<fcntl.h>
#include<sys\types.h>
#include<sys\stat.h>
#include<stdlib.h>
#include<stdio.h>
int main()
{
    char buffer[512],source[128],target[128];
    int in,out,bytes;
    printf("Enter source file name : ");
    gets(source);
    in =open(source,O_RDONLY | O_BINARY);
    if(in==-1)//(EOF=-1)
    {
        puts ("Cannot open file ");
        exit(1);
    }
    printf("Enter target file name : ");
    gets (target);
    out=open(target,O_CREAT | O_BINARY | O_WRONLY,S_IWRITE);
    if(out==-1)
    {
        puts("Cannot open file");
        close(in);
        exit(2);
    }
    while(1)

    {
        bytes=read(in,buffer,512);
        if(bytes>0)
        write (out,buffer,bytes);
        else
        break;
    }
    close(in);
    close(out);
    return 0;
}