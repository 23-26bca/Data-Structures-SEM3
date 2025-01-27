//Program to interchange any two nodes in a singly linked list.

#include<iostream.h>
#include<conio.h>
#include<process.h>
struct node
{
   int data;
   struct node *link;
} *head= NULL, *temp, *temp1, *temp2;

void push();
void display();
void interchange(int,int);

void main()
{
  int limit,m,n;
  clrscr();
  cout<<"PROGRAM TO INTERCHANGE 2 NODES:";
  cout<<"\nEnter no. of nodes to insert:";
  cin>>limit;
  for(int i=1;i<=limit;i++)
  push();
  cout<<"\nBefore: ";
  display();
  cout<<"\n\nEnter 2 values to interchange:";
  cin>>m>>n;
  interchange(m,n);
  cout<<"\nAfter: ";
  display();
  getch();
}

void push()
{
  node *newnode= new node;
  if(head->link== NULL)
         head->link=newnode;
  else
  {
    temp=head->link;
    while(temp->link!= NULL)
    {
          temp=temp->link;
    }
    temp->link=newnode;
  }
 newnode->link= NULL;
 cout<<"Enter element:";
 cin>>newnode->data;

}
void display()
{
 if(head->link== NULL)
  cout<<"stack is empty";
  temp=head;
  while(temp->link!= NULL)
  {
    temp=temp->link;
    cout<<temp->data<<"\t";
  }
}

void interchange( int m, int n)
{
    temp1=head; 
    temp2=head;
    while(temp1->link!= NULL && temp1->data!= m)
    temp1=temp1->link;
    while(temp2->link!= NULL && temp2->data!=n)
    temp2=temp2->link;

    if( (temp1->link== NULL && temp1->data!=m ) || (temp2->link==NULL && temp2->data!=n) )
   {
     cout<<"Item not found";
     getch();
     exit(0);
   }
   else
   {
     temp1->data=n;
     temp2->data=m;
   }

}
