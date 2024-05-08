/* checks your name against a list of names to see if you are worthy of entry to the palace .*/
#include<stdio.h>
int main()
{
    char list[6][20]={ "akshay","parag","raman","srinivas","gopal","rajesh"};
    int i;
    char yourname[20];
    printf("Enter your name : ");
    scanf("%s",yourname );
    for ( i = 0; i <=5; i++)
    {
        // if(strcmp(&list[i],yourname)==0)
        if(strcmp(&list[i][0],yourname)==0)
        {
            printf("Welcome,you can enter the place\n");
            return 0;
        }
    }
    printf("Sorry , you are a trespasser");
    return 0;
}