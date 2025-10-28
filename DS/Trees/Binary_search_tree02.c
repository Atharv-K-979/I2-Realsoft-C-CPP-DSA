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
int search(BST *t, int val){
    int flg = 0;
    NODE *a = t->rt;
    while(1){
        if(a->data == val){
            t->curr = a;
            flg = 1;
            break;
        }
        else{
            if(val < a->data){
                if(a->left == NULL){
                    break;
                }
                t->prnt = a;
                a = a->left;
            }
            else{
                if(a->right == NULL){
                    break;
                }
                t->prnt = a;
                a = a->right;
            }
        }
    }
    return flg;
}
void delNode(BST *t){
    NODE *p,*q,*r,*s;
    int val;
    printf("\nData vlaue to remove: ");
    scanf("%d",&val);
    if(search(t,val)==0){
        printf("\nNo such data");
        return;
    }
    p=t->prnt;
    q=t->curr;
    if(q->left==NULL && q->right==NULL){   // only one node n
        if(p->left==q) p->left=NULL;
        else p->right=NULL;
    }

    if(q->left!=NULL && q->right!=NULL){  //left right y
        if(p->left==q){
            r=q->right;
            while(r!=NULL){
                s=r;
                r=r->left;
            }
            s->left=q->left;
            p->left=q->right;
        }
        else{
            r=q->left;
            while(r!=NULL){
                s=r;
                r=r->right;
            }
            s->right=q->right;
            p->right=q->right;
        }
    }

    if(p->left==q){  //only one child
        if(q->right==NULL) p->left=q->left;
        else p->left=q->right;
    }
    if(p->right==q){
        if(q->right==NULL) p->right=q->left;
        else p->right=q->right;
    }
    free(q);
    return;

}
int main()
{
    int opt,sv;
    BST p;
    init(&p);
    while (1)
    {
        printf("\nBST menue\n1.Create BST\n2.Preorder\n3.Inorder \n4.Postorder \n5.Search\n6.Delete Node");
        scanf("%d",&opt);
        if(opt>6) return 0;
        switch (opt)
        {
        case 1:
            createTree(&p);
            break;
        case 2:
            printf("\nPreorder\n");
            preorder(p.rt);
            break;
        case 3:
            printf("\nInorder\n");
            inorder(p.rt);
            break;
        case 4:
            printf("\nPostorder\n");
            postorder(p.rt);
            break;
        case 5:
            printf("\nEnter search value\n");
            scanf("%d",&sv);
            if(search(&p,sv)==0){
                printf("Not found");
            }
            else{
                printf("\nFound");
            }
            break;
        case 6:
            delNode(&p);
            break;
        default:
            break;
        }        
    }
    
    return 0;
}