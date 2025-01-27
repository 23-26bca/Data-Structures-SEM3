//Program to implement singly linked list

#include<iostream.h>
#include<conio.h>
#include<process.h>
struct node
{
int data;
struct node *link;
};

class list
{
 struct node *head;
 public:
 list()
 {
  head=NULL;
 }
 void insertbeg(int item);
 void insertend(int item);
 void insertpos(int item, int pos);
 void display();
 void delbeg();
 void delend();
 int delpos(int pos);

};
  void list :: insertbeg(int item)
  {
    node *newnode = new node();
    if(head==NULL)
    {
     head= newnode;
     newnode->data=item;
     newnode->link=NULL;
    }
    else
    {
    newnode->data=item;
    newnode->link=head;
    head=newnode;
    }
  }
  void list :: insertend(int item)
  {

    node *temp = new node();
    node *newnode = new node();
    if(head==NULL)
    {
     head= newnode;
     newnode->data=item;
     newnode->link=NULL;
    }
    else
    {
      temp=head;
      while(temp->link!=NULL)
     {
       temp=temp->link;
     }
     newnode->link=NULL;
     newnode->data=item;
     temp->link=newnode;
    }
  }

  void list :: insertpos(int item, int pos)
  {

    node *temp = new node();
    temp=head;
    while(temp->data!=pos)
    {
     temp=temp->link;
     if(temp->link==NULL)
     {
      cout<<"\n** Data item not found in the list **";
      getch();
      exit(0);
     }
    }
    node *newnode = new node();
    newnode->link=temp->link;
    newnode->data=item;
    temp->link=newnode;

  }

  void list :: display()
  {
    node *temp = new node();
    if(head==NULL)
    {
      cout<<"\n** Empty List **";
    }
  else
  {
    temp=head;
    while(temp->link!=NULL)
    {
     cout<<"\nDATA:"<<temp->data<<" ";
     temp=temp->link;
    }
    if(temp->link==NULL)
    {
     cout<<"\nDATA:"<<temp->data<<" ";
    }

  }
  }

  void list :: delbeg()
  {
    node *temp = new node();
    temp=head;
    if(temp->link==NULL)
    {
    cout<<"\nList is empty.";
    exit(0);
    }
    head=temp->link;
    delete(temp);
  }

  void list :: delend()
  {
    node *temp = new node();
    node *ptr = new node();
    temp=head;
    if(temp->link==NULL)
    {
    cout<<"\nList is empty.";
    exit(0);
    }
    while(temp->link!=NULL)
    {
     ptr=temp;
     temp=temp->link;
    }
    ptr->link=NULL;
    delete(temp);
  }

  int list :: delpos(int pos)
  {
    int del;
    node *temp = new node();
    node *ptr = new node();
    temp=head;
    if(head->link==NULL)
    {
      cout<<"\nList is empty.";
      getch();
      exit(0);
    }
    while(temp->link!=NULL)
    {
      if(temp->data==pos)
      {
	ptr->link=temp->link;
	del=temp->data;
	delete(temp);
	return(del);
      }
      ptr=temp;
      temp=temp->link;
    }
     cout<<"\nItem not found";
     exit(0);
     return(0);
  }

  void main()
  {
   list l;
   int n,a,y,k,item;
   clrscr();
   do
   {
   cout<<"\nMENU:\nINSERTION(1.Beginning 2.End 3.Intermediate)\nDELETION (4.beginning 5.End 6.intermediate)\n7.Display\n8.Exit\nChoice: ";
   cin>>n;
   switch(n)
   {
    case 1:cout<<"\nInsertion at the beginning:";
	   cout<<"\nEnter data:";
	   cin>>a;
	   l.insertbeg(a);
	   break;

    case 2:cout<<"\nInsertion at the End:";
	   cout<<"\nEnter data:";
	   cin>>a;
	   l.insertend(a);
	   break;

    case 3:cout<<"\nInsertion at Intermediate Position:";
	   cout<<"\nEnter data:";
	   cin>>a;
	   cout<<"Enter pos:";
	   cin>>k;
	   l.insertpos(a,k);
	   break;

    case 4:cout<<"\nDeletion at Beginning:";
	   l.delbeg();
	   break;

     case 5:cout<<"\nDeletion at End:";
	   l.delend();
	   break;


     case 6:cout<<"\nDeletion at intermediate:";
     cout<<"Enter item:";
	   cin>>k;
	   item=l.delpos(k);
	   cout<<"\nDeleted item is: "<<item;
	   break;

    case 7:l.display();
	   break;
    case 8:exit(0);
    default: cout<<"\nINVALID OPTION";
	     break;
   }
   }while(1);
   getch();
  }

