//Program to implement Circular Doubly Linked List.


#include<iostream.h>
#include<conio.h>
#include<process.h>
struct node
{
 int data;
 struct node *left;
 struct node *right;

}*head=NULL, *temp, *ptr, *ptr2;

void insertion()
{
  node *newnode=new node;
  cout<<"Enter data: ";
  cin>>newnode->data;
  if(head->right==NULL)
  {
    head->right=newnode;
    newnode->left=newnode;
    newnode->right=newnode;
  }
  else
  {
   temp=head->right;
   temp->left=newnode;
   while(temp->right!=head->right)
     temp=temp->right;
   temp->right=newnode;
   newnode->left=temp;
   newnode->right=head->right;
  }
}

void deletion()
{
  if(head->right==NULL)
  {
    cout<<"\n\n** LIST UNDERFLOW **";
    return;
  }
  temp=head->right;
  while(temp->right!=head->right)
  {
    ptr=temp;
    temp=temp->right;
  }
  cout<<"Deleted item is: "<<temp->data;
  ptr->right=temp->right;
  ptr2=head->right;
  ptr2->left=ptr;
  if(temp==head->right)
  head->right=NULL;
  delete(temp);
}

void display()
{
  if(head->right==NULL)
  {
    cout<<"\n\n ** List is empty! **";
    return;
  }
  cout<<"The elements are: ";
  temp=head->right;
  ptr=head->right;
  while(temp->right!=head->right)
  {
   cout<<temp->data<<" ";
   temp=temp->right;
  }
  cout<<temp->data<<" ";
}

void main()
{
 int choice;
 clrscr();
 do
 {
   cout<<"\n\nMENU:\n1.INSERTION\n2.DELETION\n3.DISPLAY\n4.EXIT\nEnter Choice: ";
   cin>>choice;
   switch(choice)
   {
     case 1: insertion();
	     break;
     case 2: deletion();
	     break;
     case 3: display();
	     break;
     case 4: exit(0);
	     break;
     default: cout<<"\n\n** INVALID OPTION **";
	      break;
   }
 }while(1);
getch();
}

