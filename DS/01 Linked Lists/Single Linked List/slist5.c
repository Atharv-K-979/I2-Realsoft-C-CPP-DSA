#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <math.h>
#include <stdbool.h>
#include <ctype.h>
#include <time.h>
#include <limits.h>
// Polynomial function
//  1  4x^3 + 2x^2 -8x +6
//  2  2x^3 + 4x -2

//  Addition 6x^3 + 2x^2 -4x+4
//  Sub      2x^3 + 2x2-12x+8
//  Mul      8x^6+4x^5+12x^3-36x^2+40x-12

// No replication of mantissa
// Input should be in des order of the mantissa

typedef struct node
{
    int coef;
    int man;
    struct node *next;
} NODE;

typedef struct poly
{
    NODE *st;
} POLY;
void init(POLY *t)
{
    t->st = NULL;
}

NODE *createNode(int c, int m)
{
    NODE *a;
    a = (NODE *)malloc(sizeof(NODE));
    a->coef = c;
    a->man = m;
    a->next = NULL;
    return a;
}

void dellAll(POLY *t)
{
    NODE *a = t->st;
    while (t->st != NULL)
    {
        t->st = a->next;
        free(a);
        a = t->st;
    }
}

void createPoly(POLY *t)
{
    int c, m;
    NODE *a, *b;
    dellAll(t);
    while (1)
    {
        printf("\nCoef and Man\n");
        scanf("%d %d", &c, &m);
        if (c == 0 && m == 0)
            break;
        if (t->st == NULL)
            t->st = b = a = createNode(c, m); // b always points last node
        else
        {
            if (m > (b->man))
                printf("\nInvalid\n"); // if last node is > than before data then invalid
            else
            {
                a = createNode(c, m);
                b->next = a;
                b = a;
            }
        }
    }
}

void display(POLY *t)
{
    NODE *a = t->st;
    if (t->st == NULL)
        printf("\n Empty");
    else
    {
        while (a != NULL)
        {
            if (a->coef >= 0)
                printf("+");
            printf("%dX%d", a->coef, a->man);
            a = a->next;
        }
    }
}
POLY add(POLY *p,POLY *q){
    NODE *a=p->st,*b=q->st,*c,*d;
    int coef,man;
    POLY r;
    init(&r);
    while(a&&b){
        if(a->man == b->man){
            coef=a->coef+b->coef;
            man=a->man;
            a=a->next;
            b=b->next;
        }
        else{
            if(a->man > b->man){
                coef=a->coef;
                man=a->man;
                a=a->next;
            }
            else{
                coef=b->coef;
                man=b->man;
                b=b->next;
            }
        }
        if(r.st ==NULL){
            r.st=c=d=createNode(coef,man);
        }
        else{
            c=createNode(coef,man);
            d->next=c;
            d=c;
        }
    }
    while(a!=NULL){
        coef=a->coef;
        man=a->man;
        d->next=createNode(coef,man);
        d=d->next;
        a=a->next;
    }
    while (b!=NULL)
    {
        coef=b->coef;
        man=b->man;
         d->next=createNode(coef,man);
        d=d->next;
        b=b->next;
    }
    return r;

}
POLY subPoly(POLY *p,POLY *q){
    NODE *a=p->st,*b=q->st,*c,*d;
    int coef,man;
    POLY r;
    init(&r);
    while(a&&b){
        if(a->man == b->man){
            coef=a->coef-b->coef;
            man=a->man;
            a=a->next;
            b=b->next;
        }
        else{
            if(a->man > b->man){
                coef=a->coef;
                man=a->man;
                a=a->next;
            }
            else{
                coef=-1*(b->coef);
                man=b->man;
                b=b->next;
            }
        }
        if(r.st ==NULL){
            r.st=c=d=createNode(coef,man);
        }
        else{
            c=createNode(coef,man);
            d->next=c;
            d=c;
        }
    }
    while(a!=NULL){
        coef=a->coef;
        man=a->man;
        d->next=createNode(coef,man);
        d=d->next;
        a=a->next;
    }
    while (b!=NULL)
    {
        coef=-1*(b->coef);
        man=b->man;
         d->next=createNode(coef,man);
        d=d->next;
        b=b->next;
    }
    return r;

}

POLY multiplyPoly(POLY *p,POLY *q){
    NODE *a=p->st,*b=q->st,*c,*d,*n,*m;
    int coef,man;
    POLY r;
    init(&r);
    while(b != NULL){
        a=p->st;
        while (a != NULL)
        {
            coef=a->coef * b->coef;
            man=a->man + b->man;
            if(r.st==NULL) 
                r.st=c=d=createNode(coef,man);
            else{
                m=r.st;
                while(m != NULL){
                    if(m->man == man) {
                        m->coef=m->coef +coef;
                        break;
                    }
                    else{
                        if(man > m->man){
                            c=createNode(coef,man);
                            c->next=n;
                            m->next=c;
                            break;
                        }
                    }
                    n=m;
                    m=m->next;
                }
                if(m==NULL){
                    c=createNode(coef,man);
                    n->next=c;
                }
            }
            a=a->next;
           // display(&r);
        }
        b=b->next;
    }
    return r;
}
int main()
{
    POLY p,q,r;
    init(&p);
    init(&q);
    init(&r);
    printf("Enter Poly 1\n");
    createPoly(&p);
    printf("Enter Poly 2\n");
    createPoly(&q);
    // r=add(&p,&q);
    // r=subPoly(&p,&q);
    r=multiplyPoly(&p,&q);
    display(&p);
    printf("\n");
    display(&q);
    printf("\n");
    display(&r);
}