#include<stdio.h>
#define MALE 0;
#define FEMALE 0;
#define SINGLE 0;
#define MARRIED 0;
#define DIVORCED 0;
#define WIDOWED 0;
int main()
{
    struct employee
    {
        unsigned gender : 1; unsigned mar_status:2;
        unsigned hobby: 3; unsigned scheme:4;
    };
    struct employee e;
    e.gender =MALE;
    e.mar_status=DIVORCED;
    e.hobby=5;
    e.scheme =9;
    printf("Gender = %d\n",e.gender);
    printf("Marital status = %d\n",e.mar_status);
    printf("Bytes occupied by e = %d\n",sizeof(e));
    return 0;
}