#include <stdio.h>
typedef struct Marks
{
    int rno; //  [3,6,9,4,8,7]
    int mrk[5];
} MRK;
typedef struct Result
{
    int rno;
    int tot;// [3, Sum of all(34)]
            // Type casting of mrk to RES
} RES;
void input(MRK *k)
{
    int i = 0;
    printf("\nRoll no:");
    scanf("%d", &k->rno);
    printf("\nMarks\n");
    while (i < 5)
    {
        scanf("%d", (k->mrk + i));
        i++;
    }
    return;
}
int total(MRK *a)
{
    int tot = 0, i = 0;
    while (i < 5)
    {
        tot += *(a->mrk + i);
        i++;
    }
    return tot;
}
void display(MRK *a)
{
    int i = 0;
    printf("\nRoll no.%d", a->rno);
    printf("\nMarks \n");
    while (i < 5)
    {
        printf("\n%4d\n", *(a->mrk + i));
        i++;
    }
    printf("\nTotal:%d\n", total(a));
}
void displayRES(RES *t)
{
    printf("Result\n\n");
    printf("\nRoll no.%d\n", t->rno);
    printf("\nMarks %d\n", t->tot);
}
void convert(RES *t, MRK *a)
{
    t->rno = a->rno;
    t->tot = total(a); // total is fun to make tot os all elements in a
}