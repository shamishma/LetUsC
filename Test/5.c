#include<stdio.h>
int main()
{
    int n1,n2,n3,n4,n5,per;
    printf("Enter the  number of 5 subject = ");
    scanf("%d %d %d %d %d",&n1,&n2,&n3,&n4,&n5);
    per=(n1+n2+n3+n4+n5)*100/500;
    if(per>=60)
    printf("first division ! ");
    else if((per>=50)&&(per<=59))
    printf("second division !");
    else if((per>=33)&&(per<=40))
    printf("Third division !");
    else if(per<33)
    printf(" yor are failed ! ");
    return 0;
}