/* Convert given year into roman equivalent*/
#include <stdio.h>
int romanies(int, int, char);
int main()
{
    int yr;
    printf("Enter year = ");
    scanf("%d", &yr);
    yr = romanies(yr,1000,'m');
    yr = romanies(yr,500,'d');
    yr = romanies(yr,100,'c');
    yr = romanies(yr,50,'l');
    yr = romanies(yr,10,'x');
    yr = romanies(yr,5,'v');
    romanies(yr,1,'i');
        return 0;
}
int romanies(int y,int k,char ch)
{
    int i,j;
    j=y/k;
    for(i=1;i<=j;i++)
    printf("%c",ch);
    return(y%k);
}