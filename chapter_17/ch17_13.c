/*A record contains name of cricketer, his age,number of test matches that he has played and the average
runs that he has scored.Create an array of structure to hold records of 20 such cricketers and then write
a program to read these record and arrange them in ascending order by average runs. Use the qsort()
standard library function*/
#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#define MAX_NAME_LENGTH 3
typedef struct
{
    char name[MAX_NAME_LENGTH];
    int age;
    int num_test_matches;
    float avg_runs;
} Cricketer;
int compareByAvgRuns(const void *a, const void *b)
{
    const Cricketer *cricketerA = (const Cricketer *)a;
    const Cricketer *cricketerB = (const Cricketer *)b;
    if (cricketerA->avg_runs < cricketerB->avg_runs)
        return -1;
    else if (cricketerA->avg_runs > cricketerB->avg_runs)
        return 1;
    else
        return 0;
}

int main()
{
    Cricketer cricketers[3];
    printf("Enter records of cricketers :\n");
    for (int i = 0; i < 3; ++i)
    {
        printf("Cricketer %d  =>        :\n", i + 1);
        printf("Name                    : ");
        fgets(cricketers[i].name, MAX_NAME_LENGTH, stdin);
        cricketers[i].name[strcspn(cricketers[i].name, "\n")] = '\0'; // Remove trailing newline
        printf("Age                     :  ");
        scanf("%d", &cricketers[i].age);
        printf("Number of test matches  : ");
        scanf("%d", &cricketers[i].num_test_matches);
        printf("Average runs            : ");
        scanf("%f", &cricketers[i].avg_runs);
        getchar();
    }
    qsort(cricketers, 3, sizeof(Cricketer), compareByAvgRuns);
    printf("Records of cricketers sorted by average runs (ascending order):\n");
    for (int i = 0; i < 3; ++i)
    {
        printf("Cricketer %d  =>        :\n", i + 1);
        printf("Name                    : %s\n", cricketers[i].name);
        printf("Age                     : %d\n", cricketers[i].age);
        printf("Number of test matches  : %d\n", cricketers[i].num_test_matches);
        printf("Average runs            : %.2f\n", cricketers[i].avg_runs);
        printf("\n");
    }

    return 0;
}
