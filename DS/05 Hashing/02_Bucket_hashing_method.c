#include <string.h>
#include <stdio.h>
#include <stdlib.h>
typedef struct node
{
    int rno;
    char nm[50];
    struct node *next;
} NODE;

NODE arr[10];
NODE *createNode(int n, char *nm)
{
    NODE *a;
    a = (NODE *)malloc(sizeof(NODE));
    a->rno = n;
    strcpy(a->nm, nm);
    a->next = NULL;
    return a;
}
void init()
{
    int i = 0;
    while (i < 10)
    {
        arr[i].rno = 0;
        strcpy(arr[i].nm, "");
        i++;
    }
}
int hash(int no)
{
    return no % 10;
}

void insert()
{
    int no;
    int hval = hash(no);
    char nm[20];
    NODE *a, *b;
    printf("Enter Roll no:\n");
    scanf("%d", &no);
    printf("Name :\n");
    scanf("%s", nm);
    hval;
    if (arr[hval].rno == 0)
    {
        arr[hval].rno = no;
        strcpy(arr[hval].nm, nm);
        printf("Insertion at prime area\n");
        return;
    }
    printf("Collision occured\n");
    b = createNode(no, nm);
    b->next = a;
    arr[hval].next = b;
    printf("Insertion at overflow area\n");
    return;
}

void search()
{
    int no, hval;
    NODE *a;
    printf("Enter rno to search\n");
    scanf("%d", &no);
    hval = hash(no);
    if (arr[hval].rno == no)
    {
        printf("Rno : %d \nName %s", arr[hval].rno, arr[hval].nm);
        printf("Found at prime area\n");
        return;
    }
    printf("Search in overflow area\n");
    a = arr[hval].next;
    while (a != NULL)
    {
        if (a->rno == no)
        {
            break;
        }
        a = a->next;
    }
    if (a == NULL)
    {
        printf("Record not found\n");
    }
    else
    {
        printf("Rno : %d \nName %s", a->rno, a->nm);
    }
}

void main()
{
    int opt;
    //  init();
    while (1)
    {
        printf("\n1. Insert \n2. Search \n3. Display \n4. Exit");
        printf("\nEnter your choice: ");
        scanf("%d", &opt);
        if (opt > 3)
            return;
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
                    printf("\n%6d%15s", arr[i].rno, arr[i].nm);
                }
                break;
        }
    }
}
