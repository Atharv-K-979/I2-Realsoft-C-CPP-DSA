#include <stdio.h>
#include <stdlib.h>
typedef struct node
{
    struct node *left;
    int data, flg;
    struct node *right;
} NODE;

NODE *rt = NULL;
NODE *createNode(int d)
{
    NODE *a = (NODE *)malloc(sizeof(NODE));
    a->data = d;
    a->flg = 0;
    a->left = a->right = NULL;
    return a;
}

struct stack
{
    int top;
    NODE *ptr[10];
} s;

void init()
{
    s.top = -1;
}

void push(NODE *a)
{
    s.top++;
    s.ptr[s.top] = a;
}
NODE *pop()
{
    return s.ptr[s.top--];
}

int isEmpty()
{
    return (s.top == -1);
}

void createTree()
{
    int d;
    NODE *a, *b;
    while (1)
    {
        printf("\nData");
        scanf("%d", &d);
        if (d == 0)
            break;
        if (rt == NULL)
            rt = createNode(d);
        else
        {
            a = rt;
            while (1)
            {
                if (d < a->data)
                {
                    if (a->left != NULL)
                        a = a->left;
                    else
                    {
                        b = createNode(d);
                        a->left = b;
                        break;
                    }
                }
                else
                {
                    if (a->right != NULL)
                    {
                        a = a->right;
                    }
                    else
                    {
                        b = createNode(d);
                        a->right = b;
                        break;
                    }
                }
            }
        }
    }
}

void inorder(NODE *a)
{
    init();
    do
    {
        while (a != NULL)
        {
            push(a);
            a = a->left;
        }
        if (!isEmpty())
        {
            a = pop();
            printf("%4d", a->data);
            a = a->right;
        }
    } while (a != NULL || !isEmpty());
}

void preorder(NODE *a)
{
    init();
    while (a != NULL || !isEmpty())
    {
        printf("%4d", a->data);
        if (a->right != NULL)
            push(a->right);
        a = a->left;
        if (a == NULL && !isEmpty())
            a = pop();
    }
}

void postorder(NODE *a)
{
    init();
    do
    {

        while (a != NULL && a->flg == 0)
        {
            push(a);
            a = a->left;
        }
        a = pop();
        if (a->flg == 1)
        {
            printf("%4d", a->data);
        }
        else
        {
            a->flg = 1;
            push(a);
            a = a->right;
        }
    } while (!isEmpty());
}

int main()
{

    createTree();
    printf("\nPreorder :");
    preorder(rt);
    printf("\nInorder :");
    inorder(rt);
    printf("\nPostorder :");
    postorder(rt);
    return 0;
}