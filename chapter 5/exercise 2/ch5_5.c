#include<stdio.h>
int main()
 {
    int num, s, l,r;
    printf("Enter a number 0 to end: ");
    scanf("%d", &num);
    while (num != 0)
 {
 if (num<s)
{
                s= num;
            }
else if (num > l)
{
                l= num;
            }
        }
    }
    if (s!= l)
{
         r= l - s;
        printf("The range of the entered numbers is: %d\n", r);
    }
else
{
        printf("Only entered valid one numbe\n");
    }

    return 0;
}
