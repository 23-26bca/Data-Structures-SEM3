//Write a C++ program to implement Doubly Linked List.

#include <iostream.h>
#include<conio.h>
#include<process.h>
struct node
{
    int data;
    struct node *left;
    struct node *right;
} *head=NULL, *temp, *ptr;
    
void insertion()
{
    node *newnode = new node;
    cout<<"Enter data: ";
    cin>>newnode->data;
    newnode->left=head;
    if(head->right==NULL)
    {
     head->right = newnode;
     newnode->right=NULL;
    }
    else
    {
    ptr=head->right;
    ptr->left=newnode;
    newnode->right=ptr;
    head->right=newnode;
    }
   return;
}

void display()
{
 if(head->right==NULL)
  cout<<"\n\nList is empty\n";
  else
   {   temp=head->right;
       cout<<"The list is: ";
       while(temp!=NULL)
       {
	   cout<<temp->data<<" ";
	   temp=temp->right;
       }
   }
}

  void deletion()
  {
    if(head->right==NULL)
    {
    cout<<"\n\nList is empty.";
     return;
    }
    else
    {
	temp=head->right;
	while(temp->right!=NULL)
	{
	    ptr=temp;
	    temp=temp->right;
	}
	cout<<"deleted item= "<<temp->data;
	ptr->right=NULL;
	if(temp->left==head)
	head->right=NULL;
	delete(temp);

    }

  }

void main()
{
   int n,a;
   head->right=NULL;
   clrscr();
   do
   {
   cout<<"\n\nMENU:\n1.INSERTION\n2.DELETION \n3.Display\n4.Exit\nEnter Choice: ";
   cin>>n;
   switch(n)
   {
    case 1:insertion();
	       break;

    case 2:deletion();
	       break;

    case 3:display();
	       break;
    case 4:exit(0);

    default: cout<<"\nINVALID OPTION";
		 break;
   }
   }while(1);
   getch();
  }
