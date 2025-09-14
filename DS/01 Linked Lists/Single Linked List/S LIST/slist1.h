#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <math.h>
#include <stdbool.h>
#include <ctype.h>
#include <time.h>
#include <limits.h>
typedef struct node
{
    int data;
    struct node *next;
} NODE;
NODE *st = NULL; // head pointer(external pointer variable)
// Function to create a  new node
NODE *createNode(int d)
{
    NODE *a;
    a = (NODE *)malloc(sizeof(NODE));
    a->data = d;
    a->next = NULL;
    return a;
}

// Function to retrive last node address
NODE *getLastNode()
{
    NODE *a = st; // a will get destroyed after the scope
    while (a->next != NULL)
    {
        a = a->next;
    }
    return a;
}

// Function to display list
void display()
{
    NODE *a = st;
    if (st == NULL)
    {
        printf("\n Empty List");
    }
    else
    {
        printf("\nData :");
        while (a != NULL)
        {
            printf("%4d", a->data);
            a = a->next;
        }
    }
}

// Fun to add new node at end
void addEnd(int d)
{
    NODE *a = createNode(d);
    NODE *b;
    if (st == NULL) // empty node
    {
        st = a;
    }
    else
    {
        b = getLastNode();
        b->next = a;
    }
}

// Fun to add node at begin
void addBeg(int d)
{
    NODE *a = createNode(d);
    a->next = st; // address of the last node is given to st..
    st = a;
}

// Function to count nodes
int methodCount()
{
    int cnt = 0;
    NODE *a = st;
    while (a != NULL)
    { // Till address== NULL cnt++
        cnt++;
        a = a->next;
    }
    return cnt;
}

// Function to compute sum
int methodSum()
{
    int sum = 0;
    NODE *a = st;
    while (a != NULL) // Till address== NULL cnt++
    {
        sum += a->data;
        a = a->next;
    }
    return sum;
}

// Function to count odd node data
int methodOddCnt()
{
    int oddCnt = 0;
    NODE *a = st;
    while (a != NULL)
    {
        if (a->data % 2 == 1)
        {
            oddCnt++;
        }
        a = a->next;
    }
    return oddCnt;
}

// Function to count even node data
// Doing - from odd cnt is costly procressor will make time for it it will run 2 times
int methodEvenCnt()
{
    int evenCnt = 0;
    NODE *a = st;
    while (a != NULL)
    {
        if (a->data % 2 == 0)
        {
            evenCnt++;
        }
        a = a->next;
    }
    return evenCnt;
}

// Function to find Max data

int maxData()
{
    int max;
    NODE *a = st;
    while (a != NULL)
    {
        if (a == st)
        {
            max = a->data;
        }
        else
        {
            if (a->data > max)
            {
                max = a->data;
            }
        }
        a = a->next;
    }
    return max;
}

// Function to find Min data
int minData()
{
    int min;
    NODE *a = st;
    while (a != NULL)
    {
        if (a == st)
        {
            min = a->data;
        }
        else
        {
            if (a->data < min)
            {
                min = a->data;
            }
        }
        a = a->next;
    }
    return min;
}

// Function to implement sequential search return 1 if out otherwise return 0
int seqSearch(int val)
{
    NODE *a = st;
    while (a != NULL)
    {
        if (a->data == val)
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

// Funtion to find and replace
void findReplace(int sv, int rv)
{
    NODE *a = st;
    while (a != NULL)
    {
        if (a->data == sv)
        {
            a->data = rv;
        }
        a = a->next;
    }
}

// Function to delete first node from the list
void deleteFirstNode()
{
    NODE *b = st;
    if (st == NULL)
    {
        return;
    }
    st = b->next;
    free(b); // free b from the memory
}

// Function to delete last node from the list

void deleteLastNode()
{ // 10 20 30
    NODE *a = st, *b;
    if (st == NULL)
    {
        return;
    }
    if (st->next == NULL)
    {
        st = NULL;
        free(a);
        return;
    }
    while (a->next != NULL)
    {
        b = a;
        a = a->next;
    }
    b->next = NULL; // b will be second last node and a will be last node
    free(a);
}

// Function to delete all nodes from the list
void deleteAll() // Calling deletefirst is costly for processor
{
    NODE *a = st;
    while (st != NULL)
    {
        st = a->next;
        free(a); // while going free a / delete a
        a = st;
    }
}

// // Function to insert new node before ith pos
// void insertBeforePos(int pos, int val)
// {
//     NODE *new = createNode(val); // created a new node having val
//     if (pos == 0)
//     {
//         // new->next = st;
//         // st = new;
//         addBeg(val);
//         return;
//     }
//     NODE *a = st;
//     for (int i = 1; i < pos; i++)
//     {
//         a = a->next;
//     }
//     if (a == NULL)
//     {
//         return;
//     }
//     new->next = a->next;
//     a->next = new;
// }

// void insertAfterPos(int pos, int val)
// {
//     NODE *new = createNode(val);
//     NODE *a = st;
//     int i = 0;
//     for (i = 0; i < pos; i++)
//     {
//         a = a->next;
//     }
//     if (a == NULL && i < pos)
//     { // i < pos is imp case
//         printf("Position out of bounds.\n");
//         return;
//     }
//     new->next = a->next;
//     a->next = new;
// }

// Function to delete ith node from the list
void deliNODE(int pos)
{
    int i = 1;
    NODE *a = st, *b, *c;
    if (pos < 1 || st == NULL)
    {
        return;
    }
    if (pos == 1)
    {
        deleteFirstNode();
        return;
    }
    while (i < pos && a != NULL)
    {
        b = a;
        a = a->next;
        i++;
    }
    if (a == NULL)
    {
        return;
    }
    c = a->next;
    b->next = c;
    free(a);
}
// Function to add at begin
void insertB(int pos, int val)
{
    int i = 1;
    NODE *a = st, *b, *c;
    if (pos < 1 || st == NULL)
    {
        return;
    }
    if (pos == 1)
    {
        addBeg(val);
    }
    while (i < pos && a != NULL)
    {
        b = a;
        a = a->next;
        i++;
    }
    if (a == NULL)
    {
        return;
    }
    c = createNode(val);
    b->next = c;
    c->next = a;
}

// Function to add at after given pos
void insertA(int pos, int val)
{
    int i = 1;
    NODE *a = st, *b, *c;
    if (pos < 1 || st == NULL)
    {
        return;
    }
    while (i <= pos && a != NULL)
    {
        b = a;
        a = a->next;
        i++;
    }
    if (a == NULL && i < pos) //// ** very imp case
    {
        return;
    }
    c = createNode(val);
    b->next = c;
    c->next = a;
}

// reverse the linked list
void reverse()
{
    NODE *a = st, *b, *c = NULL;
    while (a != NULL)
    {
        b = a;
        a = a->next; // Reverse the list
        b->next = c;
        c = b;
    }
    st = b;
}

// fun to check list data is in ascending order

int isOrdered()
{
    NODE *a = st;
    int val;
    if (a == NULL)
        return 0;
    if (a->next == NULL)
        return 1;
    val = a->data;
    for (a = a->next; a != NULL; a = a->next)
    {
        if (val > a->data)
        {
            break;
        }
        val = a->data;
    }
    return (a == NULL) ? 1 : 0;
}

// fun to sort list

void sortList()
{
    NODE *a = st, *b, *c;
    int val;
    b = a;
    c = a->next;
    while (a->next != NULL)
    {
        b = a;
        c = a->next;
        while (c != NULL)
        {
            if (c->data < b->data)
            {
                b = c;
            }
            c = c->next;
        }
        if (a != b) // swaping
        {
            val = a->data;
            a->data = b->data;
            b->data = val;
        }
        a = a->next;
    }
}
int *toArray(int n) // ptr is int * so calling to int *
{
    int *a, i = 0;
    NODE *b = st;
    a = (int *)malloc(n * sizeof(int));
    while (b != NULL)
    {
        a[i] = b->data;
        i++;
        b = b->next;
    }
    return a;
}

void toList(int *ptr, int d)
{
    int i = 0;
    while (i < d)
    {
        addEnd(ptr[i]);
        i++;
    }
}

// Fun to write list in the file f1
void toFile()
{
    FILE *f1;
    int d;
    NODE *a = st;
    if (st == NULL)
    {
        return;
    }
    f1 = fopen("list.dat", "wb");
    while (a != NULL)
    {
        d = a->data;
        fwrite(&d, sizeof(int), 1, f1);
        a = a->next;
    }
    fclose(f1);
    printf("Work Done !!");
    return;
}

void fromFile()
{
    FILE *f1;
    int d;
    f1 = fopen("list.dat", "rb");
    if (f1 == NULL)
        return;
    deleteAll();
    while (1)
    {
        fread(&d, sizeof(int), 1, f1);
        if (feof(f1))
        {
            break;
        }
        addEnd(d);
    }
    fclose(f1);
    return;
}
