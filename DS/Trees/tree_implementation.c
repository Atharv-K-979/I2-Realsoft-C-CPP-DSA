void inorder(struct node *t)
{
   if(t!=NULL)
   {
      inorder(t->left);
      printf("%c  ",t->data);
      inorder(t->right);
   }
}



void preorder(struct node *t)
{
   if(t!=NULL)
   {
      printf("%c  ",t->data);
      preorder(t->left);
      preorder(t->right);
   }
}


void postorder(struct node *t)
{
   if(t!=NULL)
   {
      postorder(t->left);
      postorder(t->right);
      printf("%c  ",t->data);
   }
}


void main()
{
   createtree();
   clrscr();
   printf("\nInorder : ");
   inorder(rt);
   printf("\nPreorder : ");
   preorder(rt);
   printf("\nPostorder : ");
   postorder(rt);
   return;
}