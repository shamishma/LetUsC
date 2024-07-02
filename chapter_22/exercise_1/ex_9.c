/*union*/
#include<stdio.h>
int main()
{
    
    union b
    {
        long long int d; 
        float f[2];
        short int i[4];
        char ch[8];
    };
    union b data;
    printf("data .d    = %lld\n",data.d);
    printf("data. f[0] = %f\n",data.f[0]);
    printf("data.f[1]  = %f\n",data.f[1]);
    printf("------------------------------------\n");
    return 0;
}