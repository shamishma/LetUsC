#include<stdio.h>
#include<string.h>
#include<stdlib.h>
#define MAX 3
struct customer
{
    char name[15];
    int account;
    float balance;

};
void input_customer(struct customer * cust, int n);
void print_customer(struct customer *cust, int n);
int main()
{
    int n;
    struct customer *cust;
 while(1)
 {
    printf("Please choose  an option       :\n");
    printf("1.Enter the name of customer   :\n");
    printf("2.Enter the Account number     :\n");
    printf("3.Enter the balance in account :\n");
    printf("4.Exit :\n");
    printf("==>");
    scanf("%d", &n);
        switch (n)
        {
        case 1:
            input_customer(cust, MAX);
            break;
        case 2:
            print_customer(cust, MAX);
            break;
        case 3:
        exit(1);
        }

 }   
    return 0;
}