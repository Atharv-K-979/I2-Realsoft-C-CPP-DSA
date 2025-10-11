#include <stdio.h>
#include <stdlib.h>
struct tree
{
    struct tree *left;
    struct tree *right;
    char data;
} *rt = NULL;
struct tree *createNode(char ch)
{
    struct tree *p;
    p = (struct tree *)malloc(sizeof(struct tree));
    p->left = p->right = NULL;
    p->data = ch;
    return p;
};
void createTree()
{
    struct tree *ptr[20];
    struct tree *p, *q;
    int level, cnt, i;
    char ch[20];
    printf("\nDepth of the tree: ");
    scanf("%d", &level);
    if (level <= 1)
        return;
    switch (level)
    {
    case 2:
        cnt = 4;
        break;
    case 3:
        cnt = 8;
        break;
    case 4:
        cnt = 16;
        break;
    }
    for (int i = 1; i < cnt; i++)
    {
        printf("\nData");
        scanf(" %c", &ch[i]);
    }
    ptr[0] = NULL;
    for (int i = 1; i < cnt; i++)
    {
        if (ch[i] == '#')
        {
            ptr[i] == NULL;
        }
        else
        {
            p = createNode(ch[i]);
            if (i == 1)
            {
                rt = ptr[i] = p;
            }
            else
            {
                q = ptr[i / 2];
                if (i % 2 == 0)
                {
                    q->left = p;
                }
                else
                {
                    q->right = p;
                }
                ptr[i] = p;
            }
        }
    }
}
void inorder(struct tree *t)
{
    if (t != NULL)
    {
        inorder(t->left);
        printf("%c  ", t->data);
        inorder(t->right);
    }
}
void preorder(struct tree *t)
{
    if (t != NULL)
    {
        printf("%c  ", t->data);
        preorder(t->left);
        preorder(t->right);
    }
}
void postorder(struct tree *t)
{
    if (t != NULL)
    {
        postorder(t->left);
        postorder(t->right);
        printf("%c  ", t->data);
    }
}
int main()
{
    createTree();
    printf("\nPreorder : ");
    preorder(rt);
    printf("\nInorder : ");
    inorder(rt);
    printf("\nPostorder : ");
    postorder(rt);
    return 0;
}
