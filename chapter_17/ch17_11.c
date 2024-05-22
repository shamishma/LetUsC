/* Define a function to print  the account number and name of each customer with balance below Rs.1000 */
#include <stdio.h>
#include <string.h>
#include <stdlib.h>
#define MAX 2
struct customer
{
    int account;
    char name[15];
    float balance;
};
void input_customer(struct customer *cust, int n);
void print_customer(struct customer *cust, int n);
void print_below_1000(struct customer *cust, int n);
void withdraw_balance(struct customer *cust, int n);
void deposit_balance(struct customer *cust, int n);
int main()
{
    int n;
    struct customer *cust;
    cust = (struct customer *)malloc(MAX * sizeof(struct customer));
    while (1)
    {
        printf("Please choose  an option                  :\n");
        printf("1.Enter the customer record               :\n");
        printf("2. print all record of customer           :\n");
        printf("3. customer below 1000 of balance account :\n");
        printf("4.Withdraw balance                        :\n");
        printf("5.Deposit balance                         :\n");
        printf("6.Exit :\n");
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
            print_customer_below_1000(cust, MAX);
            break;
        case 4:
            withdraw_balance(cust, MAX);
            break;
        case 5:
            deposit_balance(cust, MAX);
            break;
        case 6:
            exit(1);
        defaults:
            printf("Invalid choice! Please enter valid option,\n");
        }
        
    }
    free(cust);
    return 0;
}
void input_customer(struct customer *cust, int n)
{
    for (int i = 0; i < n; i++)
    {
        printf("Enter the details of customer no. %d\n", i + 1);
        printf("Enter account number            :");
        scanf("%d", &(cust + i)->account);
        getchar();
        printf("Enter customer name             :");
        gets((cust + i)->name);
        printf("Enter account balance           :");
        scanf("%f", &(cust + i)->balance);
    }
}
void print_customer(struct customer *cust, int n)
{
    int i;
    for (i = 0; i < n; i++)
    {
        printf("Name                    : %s\n", (cust + i)->name);
        printf("Account number          : %d\n", (cust + i)->account);
        printf("Balance                 : %.2f\n", (cust + i)->balance);
        printf("---------------------------------\n");
    }
}
void print_customer_below_1000(struct customer *cust, int n)
{
    int i;
    printf("Customer with balance below RS. 1000         : \n");
    printf("------------------------------------------------------\n");
    for (i = 0; i < n; i++)
    {
        if ((cust + i)->balance < 1000)
        {
            printf("Name                    : %s\n", (cust + i)->name);
            printf("Account number          : %d\n", (cust + i)->account);
            printf("Balance                 : %.2f\n", (cust + i)->balance);
            printf("---------------------------------\n");
        }
    }
}
void withdraw_balance(struct customer *cust, int n)
{
    int acc,amt;
    printf("Enter the account no. : ");
    scanf("%d",&acc);
    printf("Enter the Ammount     :");
    scanf("%d",&amt);
    for (int i = 0; i < n; i++)
    {
        if(acc == (cust+i)->account)
        {
            (cust+i)->balance  =  (cust+i)->balance - amt;  
        }
        printf("Ammount withdraw successfully ! \n");
    }

}
void deposit_balance(struct customer *cust, int n)
{
    int acc,amt;
    printf("Enter the account no. : ");
    scanf("%d",&acc);
    printf("Enter the ammount     :");
    scanf("%d",&amt);
    for (int i = 0; i < n; i++)
    {
        if(acc == (cust+i)->account)
        {
            (cust+i)->balance  =  (cust+i)->balance + amt;  
        }
        printf("Ammount deposit successfully ! \n");
    }
    
}