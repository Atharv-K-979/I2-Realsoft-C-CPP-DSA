#include <stdio.h>
#include <stdlib.h>
#include <string.h>
typedef struct student
{
    char nm[15];
    int rno;
    int mrk;
    int state;
} STU;

typedef struct node
{
    STU data;
    struct node *next;
} NODE;

typedef struct studentlist
{
    NODE *st; // Head of list
    int cnt;  // Student count
} SLIST;      ////////////////////////// total data is 21

void init(SLIST *t)
{
    t->st = NULL;
    t->cnt = 0;
}
NODE *searchList(SLIST *t, int no)
{
    NODE *a = t->st;
    while (a != NULL)
    {
      
        if (a->data.rno == no)
        {
            break;
        }
          a = a->next;
    }
    return a;
}

void addStd(SLIST *t)
{
    NODE *a;
    int no;
    printf("Enter Roll No: ");
    scanf("%d", &no);
    a = searchList(t, no);
    if (a != NULL)
        printf("\nRecord Exists\n");
    else
    {
        a = (NODE *)malloc(sizeof(NODE));
        a->data.rno = no;
        printf("Enter Name: ");
        scanf("%s", a->data.nm);
        printf("Enter Marks: ");
        scanf("%d", &a->data.mrk);
        a->data.state = 1;
        a->next = t->st;
        t->st = a;
        t->cnt++;
        printf("Record Added !!");
    }
}

// Function to modify existing record
void modifyRecord(SLIST *t)
{
    NODE *a;
    int no;
    printf("Enter Roll No: ");
    scanf("%d", &no);
    a = searchList(t, no);
    if (a == NULL || a->data.state == 0)
        printf("\nRecord  Not Exists\n");
    else
    {
        printf("Enter Name: ");
        scanf("%s", a->data.nm);
        printf("Enter Marks: ");
        scanf("%d", &a->data.mrk);
        a->data.state = 1;
        printf("Record Modified!!");
    }
}

// Function to delete student
void deleteRecord(SLIST *t)
{
    NODE *a;
    int no;
    printf("Enter Roll No: ");
    scanf("%d", &no);
    a = searchList(t, no);
    if (a == NULL || a->data.state == 0)
        printf("\nRecord  Not Exists\n");
    else
    {
        a->data.state = 0; // Deleted
        printf("Record Deleted!!");
    }
}

void display(SLIST *t)
{
    NODE *a = t->st; // traversal ptr
    if (a == NULL)
    {
        printf("No students in list\n");
        return;
    }
    printf("List :\n");
    printf("Students of class are (%d)\n", t->cnt);
    while (a != NULL)
    {
        printf("Name: %-12s | Roll No: %2d | Marks: %2d | State: %d\n", a->data.nm, a->data.rno, a->data.mrk, a->data.state);
        a = a->next;
    }
    return;
}
// Fun to sort rno wise
void sortListbyRNO(SLIST *t)
{
    NODE *a = t->st; // traversal ptr
    NODE *b, *c;
    STU tmp;
    if(t->st ==NULL) return;
    while (a->next != NULL)
    {
        b = a;
        c = a->next;
        while (c != NULL)
        {
            if (c->data.rno < b->data.rno)
            {
                b = c;
            }
            c = c->next;
        }
        if (a != b) // swaping
        {
            // val = a->data.rno;
            // a->data.rno = b->data.rno;    // here onlt rno get sorted
            // b->data.rno = val;
            tmp = a->data;
            a->data = b->data;
            b->data = tmp;
            // sort(a->data,b->data);
        }
        a = a->next;
    }
    printf("\nSorting By RNO Done !\n\n");
}
void sortListByMRK(SLIST *t)
{
    NODE *a = t->st; // traversal ptr
    NODE *b, *c;
    STU tmp;
    if(t->st ==NULL) return;
    while (a->next != NULL)
    {
        b = a;
        c = a->next;
        while (c != NULL)
        {
            if (c->data.mrk < b->data.mrk)
            {
                b = c;
            }
            c = c->next;
        }
        if (a != b) // swaping
        {
            // val = a->data.rno;
            // a->data.rno = b->data.rno;    // here onlt rno get sorted
            // b->data.rno = val;
            tmp = a->data;
            a->data = b->data;
            b->data = tmp;
            // sort(a->data,b->data);
        }
        a = a->next;
    }
    printf("\nSorting By MRK Done !\n\n");
}
void sortListByName(SLIST *t)
{
    NODE *a = t->st; // traversal ptr
    NODE *b, *c;
    STU tmp;
    if(t->st ==NULL) return;
    while (a->next != NULL)
    {
        b = a;
        c = a->next;
        while (c != NULL)
        {
            //if (c->data.mrk < b->data.mrk)
            if(strcmp(c->data.nm,b->data.nm))
            {
                b = c;
            }
            c = c->next;
        }
        if (a != b) // swaping
        {
            // val = a->data.rno;
            // a->data.rno = b->data.rno;    // here onlt rno get sorted
            // b->data.rno = val;
            tmp = a->data;
            a->data = b->data;
            b->data = tmp;
            // sort(a->data,b->data);
        }
        a = a->next;
    }
    printf("\nSorting By MRK Done !\n\n");
}
int maxMarks(NODE *t)
{
    int max;  // used to store the max data
    NODE *a = t->next;
    while (a != NULL)
    {
        if (a == t->next)
        {
            max = a->data.mrk;
        }
        else
        {
            if (a->data.mrk > max)
            {
                max = a->data.mrk;
            }
        }
        a = a->next;
    }
    return max;
}
int minMarks(NODE *t)
{
    int min;  // used to store the max data
    NODE *a = t->next;
    while (a != NULL)
    {
        if (a == t->next)
        {
            min = a->data.mrk;
        }
        else
        {
            if (a->data.mrk < min)
            {
                min = a->data.mrk;
            }
        }
        a = a->next;
    }
    return min;
}

// Function to copy in binary file
void toFile(SLIST *t)
{
    FILE *fs;
    STU tmp;
    NODE *a = t->st;
    if (t->st == NULL)
    {
        return;
    }
    fs = fopen("student.dat", "wb");
    while (a != NULL)
    {
        tmp = a->data;
        fwrite(&tmp, sizeof(STU), 1, fs);
        a = a->next;
    }
    fclose(fs);
    printf("Work Done !!");
    return;
}
void fromFile(SLIST *t)
{
    NODE *a=t->st,*b;
    FILE *fs;
    STU tmp;
    fs = fopen("student.dat", "rb");
    if (fs == NULL)
        return;
    while(t->st != NULL){
        t->st=a->next;
        free(a);
        a=t->st;
    }
    t->cnt=0;
    while (1)
    {
        fread(&tmp, sizeof(STU), 1, fs);
        if (feof(fs))
        {
            break;
        }
        a=(NODE *)malloc(sizeof(NODE));
        a->data=tmp;
        a->next=t->st;
        t->st=a;
        t->cnt++; 
    }
    fclose(fs);
    return;
}
int seqSearch(NODE *t,int val)
{
    NODE *a = t->next;
    while (a != NULL)
    {
        if (a->data.rno == val)
        {
            break;
        }
        a = a->next;
    }
    if (a == NULL)
    {
        return 0;
    }
    else
    {
        return 1;
    }
}
int main()
{
    SLIST p; // list 1
    // p.st = NULL;
    // p.cnt = 0;   // Instead we have used init fun
    init(&p);
    NODE *a;
    int opt,sv;
    while (1)
    {
        printf("\nMenu:\n");
        printf("1.Add\n");
        printf("2.Display\n");
        printf("3.Update Student\n");
        printf("4.Delete Student\n");
        printf("5.Sort List By RNO\n");
        printf("6.Sort List By MRK\n");
        printf("7.Sort List By MRK\n");
        printf("8.To File\n");
        printf("9.From file\n");
        printf("10.Search by rno\n");
        printf("Enter choice: ");
        scanf("%d", &opt);
        if (opt > 10)
            break;
        switch (opt)
        {
        case 1:
            addStd(&p);
            break;
        case 2:
            display(&p);
            break;
        case 3:
            modifyRecord(&p);
            break;
        case 4:
            deleteRecord(&p);
            break;
        case 5:
            sortListbyRNO(&p);
            display(&p);
            break;
        case 6:
            sortListByMRK(&p);
            display(&p);
            break;
        case 7:
            sortListByName(&p);
            display(&p);
            break;
        case 8:
            toFile(&p);
            break;
        case 9:
            fromFile(&p);
            break;
        case 10:
             printf("\nEnter Roll No:");
             scanf("%d",&sv);
             printf("%d",seqSearch(&p,sv));
        }
    }
    return 0;
}
