#include <stdio.h>
#include <string.h>
struct student 
{
    char name[30];
    int age;
    int class;
};
int compare(const void *a, const void *b) {
    struct student *studentA = (struct student *)a;
    struct student *studentB = (struct student *)b;
    return strcmp(studentA->name, studentB->name);
}

int main()
 {
    FILE *p;
    struct student s;
    char ch = 'y';

    struct student st[100];
    int n = 0;
    p = fopen("student.txt", "rb");
    if (p == NULL)
     {
        printf("Error opening file for reading\n");
        return 1;
    }
    while (fread(&s, sizeof(s), 1, p) == 1) {
        st[n] = s;
        n++;
    }
    fclose(p);
    // qsort(st, n, sizeof(struct student), compare);
    printf("Before Sort\n");
    for (int i = 0; i < n; i++) {
        printf("Student name   = %s\n", st[i].name);
        printf("Student Age    = %d\n", st[i].age);
        printf("Student class  = %d\n", st[i].class);
        printf("---------------------------------------\n");
    }
    struct student temp ;
    for(int i = 0;i<n;i++)
    {
        for(int j = i+1; j<n; j++)
        {
            if(strcmp(st[i].name,st[j].name)>0)
            {
                temp = st[i];
                st[i] = st[j];
                st[j] = temp;
            }
        }
    }
    printf("After sorting\n");
    for (int i = 0; i < n; i++) {
        printf("Student name   = %s\n", st[i].name);
        printf("Student Age    = %d\n", st[i].age);
        printf("Student class  = %d\n", st[i].class);
        printf("---------------------------------------\n");
    }
    return 0;
}
