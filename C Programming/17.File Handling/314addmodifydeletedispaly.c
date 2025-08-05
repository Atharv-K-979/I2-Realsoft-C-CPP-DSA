// Program to add modify delete display acc type data from the binary file acc.dat
#include <stdio.h>
#include <string.h>
#include <stdlib.h>
typedef struct account
{
    int acno;
    char acnm[15];
    int acbal;
    int acstate;
} ACCT;
ACCT ac;  // global variable
FILE *fa; // global variable
void input(int n)
{
    ac.acno = n;
    printf("\nEnter A/c Name :");
    scanf("%s", ac.acnm);
    printf("\nA/c Balance :");
    scanf("%d", &ac.acbal);
    ac.acstate = 1;
}
void display()
{
    printf("A/c data\nA/c no. : %d\nName %s \nBalance %d \nState %d", ac.acno, ac.acnm, ac.acbal, ac.acstate);
}
// fun to search account record
// return -1 if not found otherwise return records begin pos in bytes.
int search(int n)
{
    int pos = 0;
    rewind(fa); // shifts file pointer fa to the begin of the file.
    while (1)
    {
        fread(&ac, sizeof(ACCT), 1, fa); // reads the acct file of 21 size of 1 and writes in the ac variable
        if (feof(fa))
        {
            pos = -1;
            break;
        }
        if (ac.acno == n) // a/c found
        {
            pos = ftell(fa); // tells present pos of file pointer file from begin of the file
            break;
        } // returns 21 42 ........ftell
    }
    return pos; // returns 21,42..... etc or if not found returns -1....
}
///***** pos = ftell(fa)-sizeof(ACCT);******/
// Fun to add new acct record to file
void add()
{
    int no, pos;
    printf("Acc No : ");
    scanf("%d", &no);
    pos = search(no);
    if (pos >= 0)
    {
        printf("\nRecord Exists .");
        return;
    }
    else
    {
        input(no);
        fseek(fa, 0, SEEK_END); // the fun call seeks file pointer to abyte no 0 from end of the file
        fwrite(&ac, sizeof(ACCT), 1, fa);
        printf("\n Record added..");
    }
}
// fun to modify existing account record..
void modify()
{
    int no, pos;
    printf("Acc No : ");
    scanf("%d", &no);
    pos = search(no);
    if (pos == -1 || ac.acstate == 0)
    {
        printf("\n Record does not exist");
        return;
    }
    input(no);
    fseek(fa, pos, SEEK_SET); // the fun call fseek shifts file pointer fa ath byte no pos from begin of the file..
    fwrite(&ac, sizeof(ACCT), 1, fa);
    printf("\n Record Modified");
}
// Fun to delete existing acct record..
void del()
{
    int no, pos;
    printf("Acc No\n");
    scanf("%d", &no);
    pos = search(no);
    if (pos == -1 || ac.acstate == 0)
    {
        printf("\n Record not exists");
        return;
    }
    ac.acstate = 0;
    fseek(fa, pos, SEEK_SET); // the fun call fseek shifts file pointer fa ath byte no pos from begin of the file..
    fwrite(&ac, sizeof(ACCT), 1, fa);
    printf("\nRecord Deleted");
}
// fun to dispaly all accounts data
void displayAll()
{
    rewind(fa);
    while (1)
    {
        fread(&ac, sizeof(ACCT), 1, fa);
        if (feof(fa))
        {
            break;
        }
       display();
    }
    return;
}

int main()
{
    int opt;
    fa = fopen("acc.dat", "r+b"); // to read to write and also modify
    if (fa == NULL)
    {
        fa = fopen("acc.dat", "wb"); // write only
        fclose(fa);
        fa = fopen("acc.dat", "w+b"); // if file is not present int the storage then it will return null for that we first created the file.
    }
    while (1)
    {
        printf("\nMenu:\n 1. Add Account\n 2. Modify Account\n 3. Delete Account\n 4. Display All Accounts\n 5. Exit\n");
        printf("Enter your choice: ");
        scanf("%d", &opt);
        switch (opt)
        {
        case 1:
            add();
            break;
        case 2:
            modify();
            break;
        case 3:
            del();
            break;
        case 4:
            displayAll();
            break;
        case 5:
            printf("Exiting program.\n");
            return 0;
        }
    }
    return 0;
    fclose(fa);
}