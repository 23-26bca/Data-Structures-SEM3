//Program to implement circular linked list

#include<iostream.h>
#include<conio.h>
#include<process.h>
struct node
{
 int data;
 struct node *link;

}*head=NULL, *temp, *ptr;

void insertion()
{
  node *newnode=new node;
  cout<<"Enter data: ";
  cin>>newnode->data;
  if(head->link==NULL)
  {
    head->link=newnode;
    newnode->link=newnode;
  }
  else
  {
   temp=head->link;
   while(temp->link!=head->link)
     temp=temp->link;
   temp->link=newnode;
   newnode->link=head->link;
  }
}

void deletion()
{
  if(head->link==NULL)
  {
    cout<<"\n\n** LIST UNDERFLOW **";
    return;
  }
  temp=head->link;
  while(temp->link!=head->link)
  {
    ptr=temp;
    temp=temp->link;
  }
  cout<<"Deleted item is: "<<temp->data;
  ptr->link=temp->link;
  if(temp==head->link)
  head->link=NULL;
  delete(temp);
}

void display()
{
  if(head->link==NULL)
  {
    cout<<"\n\n ** List is empty! **";
    return;
  }
  cout<<"The elements are: ";
  temp=head->link;
  ptr=head->link;
  while(temp->link!=head->link)
  {
   cout<<temp->data<<" ";
   temp=temp->link;
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
