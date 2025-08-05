#include <stdio.h>
typedef struct account
{
    int ano;
    char aname;
    int abal;
} ACCT;
void input(ACCT *p)
{
    printf("\nAcc no. ");
    scanf("%d", &p->ano);
    printf("\n A/c Name. ");
    scanf("%s", &p->aname);
    printf("\nBalance. ");
    scanf("%d", &p->abal);
}
void display(ACCT p)
{
    printf("\nAccount Data");
    printf("\nA/c no %d\nA/c name %s\nA/c Balance %d\n", p.ano, p.aname, p.abal);
}
