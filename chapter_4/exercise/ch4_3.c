/* A cartain of steel is graded according to the following condition:
(1) Hardness must be greater than 50
(2) Carbon content mus be the than 0.7
(3) Tensile strenght must be greater than 5600
Write a program, which will equire the user to gien values of hardness ,
 corbon content and tensile stenght of thesteel uner consideration and output the grsde of the steel.*/
#include<stdio.h>
int main()
{
    int h,s;
    float c;
    printf("Enter the hardness : ");
    scanf("%d",&h);
     printf("Enter the carbon : ");
    scanf("%f",&c); 
    printf("Enter the tensile : ");
    scanf("%d",&s);
    if(h>50 && c<0.7 && s>5600)
    printf("Grade 10 ! ");
    else if(h>50 && c<0.7)
    printf("Grade 9 ! ");
    else if(c<0.7 && s>5600)
    printf("Grade 8 ! ");
    else if(h>50 && s>5600)
    printf("Grade 7 ! ");
    else if(h>50 || c<0.7 || s>5600)
    printf("Grade 6 ! ");
    else 
    printf("Grade 5 ! ");
    return 0;
}