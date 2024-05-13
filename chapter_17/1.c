#include<stdio.h>
int main()
{
    char name[3];
    float price[3];
    int pages[3];
    int i;
    printf("Enter names,price and no. of page of 3 books \n2: ");
    for( i=0;i<=2;i++);
    scanf("%c %f %d\n", &name[i],&price[i],&pages[i]);
    printf("And this is what you entered ");
    for ( i = 0; i <=2; i++)
    {
        printf("%c %f %d\n",name[i],price[i],pages[i]);
    }
    
    return 0;
}