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
    struct node *prev;
    int data;
    struct node *next;
} NODE;
typedef struct dlist
{
    NODE *st;
    NODE *ed;
} DLIST;
void init(DLIST *t)
{
    t->st = NULL;
    t->ed = NULL;
}
NODE *createNode(int d)
{
    NODE *a;
    a = (NODE *)malloc(sizeof(NODE));
    a->prev = a->next = NULL;
    a->data = d;
    return a;
}
void addAtEnd(DLIST *p, int d)
{
    NODE *a, *b = createNode(d);
    if (p->st == NULL)
    {
        p->st = b;
    }
    else
    {
        a = p->ed;
        a->next = b;
        b->prev = a;
    }
    p->ed = b;
}
void addAtBeg(DLIST *p, int d)
{
    NODE *a, *b = createNode(d);
    if (p->ed == NULL)
        p->ed = b;
    else
    {
        a = p->st;
        b->next = a;
        a->prev = b;
    }
    p->st = b;
}
void insertBeforePos(DLIST *p,int pos,int d){
    NODE *a=p->st, *b, *c;
    int i=1;
    if (pos < 1 && p->st == NULL) return;
    if (pos == 1) addAtBeg(p,d);
    while (i < pos && a != NULL)
    {
        b = a;
        a = a->next;
        i++;
    }
    if (a == NULL) return; // bounds chya baher
    // etha a =200 b= 100 c= let 60
    c=createNode(d);  // let 60
    b->next = c; // 100 chya next la 60
    c->prev = b; // 60 chya prev la 100
    c->next = a; // 60 chya next la 200
    a->prev = c; // 200 chya prev la 60
}
void insertAfterPos(DLIST *p,int pos,int d){
    NODE *a=p->st, *b, *c;
    int i=1;
    if (pos < 1 && p->st == NULL && p->ed == NULL) return;
    if(pos==1) addAtEnd(p,d);
    while (i <= pos && a != NULL){
        b = a;
        a = a->next;
        i++;
    }
    if(a==NULL && i==pos+1){
        addAtEnd(p,d);
        return;
    }
    if(a==NULL && i<=pos )// Position is out of bounds
    {
        // addAtEnd(p,d);
        return;
    }
    // etha a=300 b=200 let c=90
    c = createNode(d); // let 90
    b->next = c; // 200 chya next la 90
    c->prev = b; // 90 chya prev la 200
    c->next = a; // 90 chya next la 300
    a->prev = c; // 300 chya prev la 90
}
void dellFirst(DLIST *p)
{
    NODE *a = p->st; // 'a' points to the node to delete
    NODE *b;
    if (p->st == NULL)
        return; // Empty list
    if (p->st == p->ed)
    { // Only one node
        p->st = p->ed = NULL;
    }
    else
    {
        b = a->next;    // b will be the new first node
        b->prev = NULL; // remove backward link
        p->st = b;      // update start to b
    }
    free(a); // free the original last node
}
void dellLast(DLIST *p)
{
    NODE *a = p->ed, *b;
    if (p->ed == NULL)
        return;
    if (p->st == p->ed)
    { // only one node
        p->st = p->ed = NULL;
    }
    else
    {
        b = a->prev;    // b will be the new first node
        b->next = NULL; // remove backward link
        p->ed = b;
    }
    free(a);
}
void dellAtPos(DLIST *p,int pos){
    NODE *a=p->st,*b,*c;
    int i=1;
    if(pos < 1 || p->ed==NULL) return;
    if(pos==1) {
        dellFirst(p);
        return;
    }
    // int last=countNodes(p);
    // if(pos==last) {
    //     dellLast(p);
    //     return;
    // }
    while(i<pos && a!=NULL){
        b=a;
        a=a->next;
        i++;
    }
    if(a==NULL) return;//given pos is out of list
    c = a->next;  // Store next of 'a'
    b->next = c;
    c->prev = b;
    free(a);
}
void dellAll(DLIST *p)
{
    NODE *a = p->st, *b;
    while (a != NULL)
    {
        // a=50 b=null 
        // a=100 b=50  removed 50
        // a=200 b=100  removed 100
        // a=90  b=200  removed 90
        // a=300 b=90  removed 300
        // a=Null loop chya bher
        b = a->next; 
        free(a);     
        a = b;  
    }
    init(p);
} 
int countNodes(DLIST *t)
{
    NODE *a;
    int cnt = 0;
    a = t->st;
    if (t->st == NULL)
        return 0;
    else
    {
        while (a != NULL)
        {
            cnt++;
            a = a->next;
        }
    }
    return cnt;
}
int sumOfNodes(DLIST *t)
{
    NODE *a;
    int sum = 0;
    a = t->st;
    if (t->st == NULL)
        return 0;
    else
    {
        while (a)
        {
            sum += a->data;
            a = a->next;
        }
    }
    return sum;
}
void displayStartToEnd(DLIST *t)
{
    NODE *a;
    a = t->st;
    if (t->st == NULL)
        printf("\nEmpty List");
    else
    {
        printf("\nData");
        while (a != NULL)
        {
            printf("%4d", a->data);
            a = a->next;
        }
    }
}
void displayEndToStart(DLIST *t)
{
    NODE *a;
    a = t->ed;
    if (t->ed == NULL)
        printf("\nEmpty List");
    else
    {
        printf("\nData");
        while (a != NULL)
        {
            printf("%4d", a->data);
            a = a->prev;
        }
    }
}
int main()
{
    DLIST a;
    init(&a);
    printf("Double Linked List\n");
    int opt, pos, d;
    while (1)
    {
        printf("\n1. Add at end\n2. Add at begin\n3. Display start to end\n4. Display End to Start\n5. Insert ith node Before Pos\n6. Insert ith node After Pos\n7. Delete Last Node\n8. Delete First Node\n9. Delete ith node\n10. Delete all Nodes\n11. Count All nodes\n12. Sum of Nodes\n13. Exit\n");
        scanf("%d", &opt);
        if (opt > 13)
        {
            printf("Invalid Option !!");
            break;
        }
        switch (opt)
        {
        case 1:
            printf("Enter data to add at end: ");
            scanf("%d", &d);
            addAtEnd(&a, d);
            break;
        case 2:
            printf("Enter data to add at begin: ");
            scanf("%d", &d);
            addAtBeg(&a, d);
            break;
        case 3:
            displayStartToEnd(&a);
            break;
        case 4:
            displayEndToStart(&a);
            break;
        case 5:
            printf("Enter position to insert before: ");
            scanf("%d", &pos);
            printf("Enter data to insert before position %d: ", pos);
            scanf("%d", &d);
            insertBeforePos(&a, pos, d);
            break;
        case 6:
            printf("Enter position to insert after: ");
            scanf("%d", &pos);
            printf("Enter data to insert after position %d: ", pos);
            scanf("%d", &d);
            insertAfterPos(&a, pos, d);
            break;
        case 7:
            dellLast(&a);
            printf("Last node deleted.\n");
            break;
        case 8:
            dellFirst(&a);
            printf("First node deleted.\n");
            break;
        case 9:
            printf("Enter position to delete: ");
            scanf("%d", &pos);
            dellAtPos(&a, pos);
            printf("Node at position %d deleted.\n", pos);
            break;
        case 10:
            dellAll(&a);
            printf("All nodes deleted.\n");
            break;
        case 11:
            printf("Total nodes: %d\n", countNodes(&a));
            break;
        case 12:
            printf("Sum of nodes: %d\n", sumOfNodes(&a));
            break;
        }
    }
}


// Hw 
// dell at pos given by user
// insert new node before ith pos
// insert new node after ith pos
// del all nodes