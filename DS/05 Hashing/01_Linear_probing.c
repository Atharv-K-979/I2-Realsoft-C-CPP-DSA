#include <string.h>
#include <stdio.h>
typedef struct student
{
    int rno;
    char nm[15];
} STU;
STU s[10];
int hash(int no)
{
    return no % 10; // mod div
}
void init()
{
    int i = 0;
    while (i < 10)
    {
        s[i].rno = 0;
        strcpy(s[i].nm, "");
        i++;
    }
}
void insert()
{
    int no, i, hval;
    printf("\nRoll no: ");
    scanf("%d", &no);
    hval = hash(no);
    if (s[hval].rno == 0)
    {
        s[hval].rno = no;
        printf("\nEnter name: ");
        scanf("%s", s[hval].nm);
        printf("\nInsertion at home Addr");
        return;
    }
    printf("\nCollision Occured\n");
    for (int i = hval + 1; i < 10; i++)
    {
        if (s[i].rno == 0)
        {
            s[i].rno = no;
            printf("\nEnter name: ");
            scanf("%s", s[i].nm);       //fi
            printf("\nInsertion on Collision path");
            break;
        }
    }
    if (i != 10)
    {
        return;
    }
    for (int i = 0; i < hval; i++)
    {
        if (s[i].rno == 0)
        {
            s[i].rno = no;
            printf("\nEnter name: ");
            scanf("%s", s[hval].nm);
            printf("\nInsertion on Collision path");
            break;
        }
    }
    if (i == hval)
    {
        printf("\n Overflow cant add");
    }
}

void search()
{
    int no, i, hval;
    printf("\nRoll no: ");
    scanf("%d", &no);
    hval = hash(no);
    if (s[hval].rno == 0)
    {
        printf("\n Name: %s", s[hval].nm);
        printf("\nRecord Found");
        printf("\nAt home address");
        return;
    }
    printf("\nSearch on collision path\n");
    for (int i = hval + 1; i < 10; i++)
    {
        if (s[i].rno == 0)
        {
            printf("\nName: %s",s[i].nm);  
            printf("\nFound on collision path");
            break;
        }
    }
    if (i != 10)
    {
        return;
    }
    for (int i = 0; i < hval; i++)
    {
        if (s[i].rno == 0)
        {
            printf("\nName: %s",s[i].nm);
            printf("\nFound on Collision path");
            break;
        }
    }
    if (i == hval)
    {
        printf("\nNot found");
    }
}

void main()
{
    int opt;
    init();
    while (1)
    {
        printf("\n1. Insert \n2. Search \n3. Display \n4. Exit");
        printf("\nEnter your choice: ");
        scanf("%d", &opt);
        if(opt>3) return;
        switch (opt)
        {
        case 1:
            insert();
            break;
        case 2:
            search();
            break;
        case 3:
            printf("\nRollNo\tName");
            for (int i = 0; i < 10; i++)
            {
                printf("\n%6d%-15s", s[i].rno, s[i].nm);
            }
            break;
        }
    }
}
