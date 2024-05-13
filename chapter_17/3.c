#include <stdio.h>
void linkfloat();
int main() 

{
    struct book
    {
        char name;
        float price;
        int pages;
    };
    struct book b[10];
    int i;
    int dh;
    for (i = 0; i <= 9; i++)
    {
        printf("Enter name, price and pages\n");
        scanf("%c %f %d\n",&b[i].name,&b[i].price,&b[i].pages );
        while((dh=getchar())!='\n');
    }
for ( i = 0; i <=9; i++)
{
    printf("%c %f %d\n",b[i].name,b[i].price,b[i].pages);
}

    return 0;
}