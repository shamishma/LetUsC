#include<stdio.h>
int main()
{
    int i,arr[10]={ 3,45 ,34,22,12, 67,87,98,84,45};
    for(i=0;i<sizeof(arr)/sizeof(arr[0]);i++)
    {
        printf("No %d address = %u\n",i+1,&arr[i]);
    }
    return 0;
}