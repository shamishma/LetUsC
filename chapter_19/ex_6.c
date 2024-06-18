/* Write a program to create a another file that contain the updated list of names roll numbers.Assume that the master file and the
 transaction file are arranged in ascending order by roll numbers The updated file should also be in ascending order by roll number*/
#include <stdio.h>
#include <string.h>
#include <stdlib.h>

struct data
{
    int rollno;
    char name[20];
};

void add_info(char *);
void display(char *);
void update_list(char *, char *);

int main()
{
    char filename[] = "Students.dat";
    char continueAdding = 'y';

    while (continueAdding == 'y' || continueAdding == 'Y')
    {
        add_info(filename);
        printf("Do you want to add another name? (y/n): ");
        scanf(" %c", &continueAdding);
    }

    update_list(filename, "Transaction.txt");

    display("NewList.dat");

    return 0;
}

void add_info(char *file)
{
    struct data e;
    FILE *fp = fopen(file, "ab");
    if (fp == NULL)
    {
        printf("Could not open file for writing.\n");
        return;
    }

    printf("Enter roll number: ");
    scanf("%d", &e.rollno);
    printf("Enter student name: ");
    scanf("%s", e.name);
    fwrite(&e, sizeof(e), 1, fp);
    fclose(fp);
}

void display(char *fname)
{
    FILE *fp;
    struct data e;
    fp = fopen(fname, "rb");
    if (fp == NULL)
    {
        printf("Can't open the file %s.\n", fname);
        return;
    }
    printf("\nUpdated List of Students:\n");
    while (fread(&e, sizeof(e), 1, fp) == 1)
    {
        printf("%2d\t%-20s\n", e.rollno, e.name);
    }
    fclose(fp);
}

void update_list(char *masterFile, char *transactionFile)
{
    FILE *tf, *mf, *uf;
    char code;
    int rollno;
    struct data dat_of_mf, dat_of_tf;

    tf = fopen(transactionFile, "r");
    if (tf == NULL)
    {
        printf("Transaction file %s not found.\n", transactionFile);
        exit(1);
    }
    mf = fopen(masterFile, "rb");
    if (mf == NULL)
    {
        printf("Master file %s not found.\n", masterFile);
        exit(2);
    }
    uf = fopen("NewList.dat", "wb+");
    if (uf == NULL)
    {
        printf("Unable to create updated list file NewList.dat.\n");
        exit(3);
    }

    while (fscanf(tf, " %c", &code) != EOF)
    {
        if (code == 'D')
        {
            fscanf(tf, "%d", &rollno);
            while (fread(&dat_of_mf, sizeof(dat_of_mf), 1, mf) == 1)
            {
                if (dat_of_mf.rollno != rollno)
                {
                    fwrite(&dat_of_mf, sizeof(dat_of_mf), 1, uf);
                }
            }
            rewind(mf);
        }
        else if (code == 'A')
        {
            fscanf(tf, "%d %s", &dat_of_tf.rollno, dat_of_tf.name);
            int added = 0;
            while (fread(&dat_of_mf, sizeof(dat_of_mf), 1, mf) == 1)
            {
                if (!added && dat_of_tf.rollno < dat_of_mf.rollno)
                {
                    fwrite(&dat_of_tf, sizeof(dat_of_tf), 1, uf);
                    added = 1;
                }
                fwrite(&dat_of_mf, sizeof(dat_of_mf), 1, uf);
            }
            if (!added)
            {
                fwrite(&dat_of_tf, sizeof(dat_of_tf), 1, uf);
            }
            rewind(mf);
        }
    }

    while (fread(&dat_of_mf, sizeof(dat_of_mf), 1, mf) == 1)
    {
        fwrite(&dat_of_mf, sizeof(dat_of_mf), 1, uf);
    }

    fclose(uf);
    fclose(mf);
    fclose(tf);
}
