/*Write a program to find out whether a student is pass or fail. if it requires total 40% of total
marks to pass and at least 33% in eac subject to pass in every subject. Assume 5 subjects marks input
through the keyboard, print total marks and in how many subjects student is failed and last result he
is passed or not.*/
#include <stdio.h>
int main()
{
    float s1, s2, s3, s4, s5, sum, per, count = 0;
    printf("Enter the number of English  = ");
    scanf("%f", &s1);
    printf("Enter the number of Maths    = ");
    scanf("%f", &s2);
    printf("Enter the number of Hindi    = ");
    scanf("%f", &s3);
    printf("Enter the number of SST      = ");
    scanf("%f", &s4);
    printf("Enter the number of Science  = ");
    scanf("%f", &s5);
    sum = s1 + s2 + s3 + s4 + s5;
    printf("The sum is %f\n", sum);
    per = (s1 + s2 + s3 + s4 + s5) * 100 / 500;
    printf("The percentage is %f\n", per);
    if (s1 > 33)
        count++;
    if (s2 > 33)
        count++;
    if (s3 > 33)
        count++;
    if (s4 > 33)
        count++;
    if (s5 > 33)
        count++;
    printf("How many subject in witch he pass = %.0f\n", count);
    if(per>33)
    printf("Student Passed\n");
    else
    printf("Student Failed\n");
    return 0;
}