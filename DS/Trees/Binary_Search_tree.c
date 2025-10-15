#include <stdio.h>
#include <stdlib.h>

typedef struct node{
    struct node *left;
    int data;
    struct node *right;

}NODE;
typedef struct binarysearchtree{
    NODE *rt;   // root node;
    NODE *prnt; // parent node;
    NODE *curr; // current node;
}BST;
void init(BST *t){
    t->rt=t->curr=t->prnt=NULL;
}
NODE *createNode(int d){
    NODE *a=(NODE*)malloc(sizeof(NODE));
    a->data=d;
    a->left=a->right=NULL;
    return a;
}
void createTree(BST *t){
    NODE *a,*b;
    int d;
    while(1){
        printf("\nData: ");
        scanf("%d",&d);
        if(d==0) break;
        if(t->rt==NULL) t->rt=createNode(d);
        else{
            a=t->rt;
            while(1){
                if(d<a->data){
                    if(a->left!=NULL)// left subtree exists
                        a=a->left;
                    else{
                        b=createNode(d);
                        a->left=b;
                        break;
                    }
                }
                else{               // data is >= the root node
                    if(a->right!=NULL) 
                        a=a->right;
                    else{
                        b=createNode(d);
                        a->right=b;
                        break;
                    }
                }
            }
        }
    }
}
void inorder(NODE *t)
{
    if (t != NULL)
    {
        inorder(t->left);
        printf("%4d", t->data);
        inorder(t->right);
    }
}
void preorder(NODE *t)
{
    if (t != NULL)
    {
        printf("%4d", t->data);
        preorder(t->left);
        preorder(t->right);
    }
}
void postorder(NODE *t)
{
    if (t != NULL)
    {
        postorder(t->left);
        postorder(t->right);
        printf("%4d", t->data);
    }
}
int main()
{
    BST p;
    init(&p);
    createTree(&p);
    printf("\nPreorder :");
    preorder(p.rt);
    printf("\nInorder :");
    inorder(p.rt);
    printf("\nPostorder :");
    postorder(p.rt);
    return 0;
}