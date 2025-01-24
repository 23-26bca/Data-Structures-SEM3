//Program to perform operations on a tree data structure.
  //     a) Create a Binary Search Tree of integers.
  //     b) Traverse the above BST in Preorder, Inorder and Postorder

#include<iostream.h>
#include<conio.h>
#include<process.h>
struct tree
{
  int data;
  tree *left;
  tree *right;
}*root=NULL;

tree* insert(tree *node,int item)
{
  if(node==NULL)
  {
    tree *newnode=new tree;
    newnode->data=item;
    newnode->left=newnode->right=NULL;
    if(root==NULL)
    root=newnode;
    else
    return newnode;
  }
  else
  {
    if(item < node->data)
      node->left=insert(node->left,item);
    else if(item > node->data)
      node->right=insert(node->right,item);
    return node;
  }

}

void preorder(tree *node)
{
  if(node==NULL)
  return;

    cout<<" "<<node->data;
    preorder(node->left);
    preorder(node->right);
}

void inorder(tree *node)
{
  if(node==NULL)
  return;
  else
  {
    inorder(node->left);
    cout<<" "<<node->data;
    inorder(node->right);
  }
}


void postorder(tree *node)
{
  if(node==NULL)
  return;
  else
  {
    postorder(node->left);
    postorder(node->right);
    cout<<" "<<node->data;
  }
}


void main()
{
 int option,item;
 clrscr();
 do
 {
 cout<<"\nOPERATIONS:\n1.INSERT 2.PREORDER 3.INORDER 4.POSTORDER 5.EXIT\nENTER CHOICE: ";
 cin>>option;
 switch(option)
 {
   case 1: cout<<"Enter data to insert: ";
	   cin>>item;
	   insert(root,item);
	   break;
   case 2: cout<<"\nPreorder Traversal: ";
	   preorder(root);
	   break;
   case 3: cout<<"\nInorder Traversal: ";
	   inorder(root);
	   break;
   case 4: cout<<"\nPostorder Traversal: ";
	   postorder(root);
	   break;
   case 5: exit(0);
	   break;
   default:cout<<"\nInvalid Choice";
	   break;
  }
 }while(1);
 getch();
}
