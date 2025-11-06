#include <stdio.h>
#include <stdlib.h>
#define N 10
struct list{
    int data;
    struct list *next;
}*K[N];

int visited[N];
struct lisd *createNode(int v){
    struct list *a;
    a=(struct list*)malloc(sizeof(struct list));
    a->data=v;
    a->next=NULL;
    return a;
}
void createGraph(){
    int i=0,v,n;struct list *a;
    printf("\nEnter vertices count: ");
    scanf("%d",&n);
    while(i<n){
        printf("\nVertex: ");
        scanf("%d",&v);
        K[i]=a=createNode(v);
        printf("\nAdj. Vertices: ");
        while(1){
            scanf("%d",&v);
            if(v==0) break;
            a->next=createNode(v);
            a=a->next;
        }
        i++;
    }
}
void dfs(int v){
    struct list *a;
    visited[v-1]=1;
    printf("%4d",v);
    a=K[v-1];
    while (a!=NULL)
    {
        if(visited[a->data-1]==0) dfs(a->data); // backtrack condition
        else a=a->next;
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
    dfs(1);
    return;
}
