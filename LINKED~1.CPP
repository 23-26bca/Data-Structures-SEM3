#include<iostream.h>
#include<conio.h>
#include<process.h>
struct node
{
  int data;
  struct node *link;
}*head=NULL, *front=head, *rear, *temp;

void insertion();
void deletion();
void display();

void main()
{
 int choice;
 clrscr();
 cout<<"QUEUE IMPLEMENTATION USING LINKED LIST ";
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
 }
 while(1);
getch();
}

void insertion()
{
  node *newnode= new node;
  cout<<"Enter data: ";
  cin>>newnode->data;
  if(head->link==NULL)
  {
    head->link=newnode;
    newnode->link=NULL;
    rear=newnode;
    front=newnode;
  }
  else
  {
    rear->link=newnode;
    newnode->link=NULL;
    rear=newnode;
  }
}

void deletion()
{
  if(front==head)
  cout<<"** QUEUE UNDERFLOW **";
  else
  {
    cout<<"Deleted item is:"<<front->data;
    front=front->link;
    head->link=front;
  }
  if(front==NULL)
  front=head;
}

void display()
{
 if(front==head)
 {
   cout<<"** Queue is empty **";
   return;
 }
 cout<<"The elements are:";
 temp=front;
 while(temp!=NULL)
 {
   cout<<temp->data<<" ";
   temp=temp->link;
 }
}
