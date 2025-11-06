#include <stdio.h>
#include <stdlib.h>
#define N 10
int n;
int adj[N][N]; 
struct node{
    int val;
    struct node *next;
}*S[N];
struct node *createNode(int v)
{
    struct node *a;
    a=(struct node *)malloc(sizeof(struct node));
    a->val=v;
    a->next=NULL;
    return a;
};
void createGraph(){
    int i,j;
    struct node *a;
    printf("\nVertices Count");
    scanf("%d",&n);
    for ( i = 1; i <=n ; i++)
    {
        printf("\nVertices :%d",i);
        S[i]=a=createNode(i);
        printf("\nAdjecent Nodes\n");
        while(1){
            scanf("%d",&j);
            if(j==0) break;
            a->next=createNode(j);
            a=a->next;
        }
    }
}
void displayGraph(){
    struct node *a;
    int i,j;
    for (int i = 1; i <= n; i++)
    {
        a=S[i];
        while(a!=NULL)
        {
            printf("%4d",a->val);
            a=a->next;
        }
    }
}
//n=5
// 1 2 3 0 
// 2 1 4 0
// 3 1 4 0
// 4 2 3 5 0
// 5 4 0
void main(){
    createGraph();
    displayGraph();
}