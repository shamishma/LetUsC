/* A company insurs its driver in the following cases:if th driver is merried,
unmarried,male & above 30 years of age and unmarried, female & above 25 years of age.
wrte a program to etermine whether the driver should be insured or not.*/
#include<stdio.h>
#include<conio.h>
int main()
{
    int age;
    char gender,ms;
    printf("Enter the age = ");
    scanf("%d",&age);
    getchar();
    printf("Enter the gender = ");
    scanf("%c",&gender);
    getchar();
    printf("Enter the ms = ");
    scanf("%c",&ms);
    if(ms=='m')
    printf("Driver insured\n");
    else if((ms=='u')&&(gender=='m')&&(age>30))
    printf("Driver insured\n");
    else if((ms=='u')&&(gender=='f')&&(age>25))
    printf("Driver insured\n");
    else
    printf("Not insured");
    return 0;
}