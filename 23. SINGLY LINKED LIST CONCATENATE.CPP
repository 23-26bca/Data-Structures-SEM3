//Program to Concatenate two Singly Linked Lists

#include<iostream.h>
#include<conio.h>
struct node
{
   int data;
   struct node *link;
};

class linkedlist
{
  public:
  struct node *head, *temp;
  void push();
  void display();
  void concatenate(linkedlist);
  linkedlist()        //constructor to set heads of both LL to NULL
  {
    head->link=NULL;
  }
};

void linkedlist :: push()
{
   node *newnode= new node;
   if(head->link== NULL)
     head->link=newnode;
   else
   {
     temp=head;
     while(temp->link!= NULL)
     temp=temp->link;

     temp->link=newnode;
   }
   newnode->link= NULL;
   cout<<"Enter element:";
   cin>>newnode->data;
}

void linkedlist :: concatenate(linkedlist b)
{
   temp=head;
   while(temp->link!=NULL)
   temp=temp->link;

   temp->link=b.head->link;
}

void linkedlist :: display()
{
   temp=head;
   while(temp->link!=NULL)
   {
     temp= temp->link;
     cout<<temp->data<<"\t";
   }
}

void main()
{
  linkedlist a,b;
  int m,n,i;
  clrscr();
  cout<<"Number of elements in the linked lists(first,second): ";
  cin>>m>>n;
  cout<<"\nFirst list:\n";
  for(i=0;i<m;i++)
  a.push();

  cout<<"\nSecond list:\n";
  for(i=0;i<n;i++)
  b.push();
  cout<<"\nConcatenated List:\n";
  a.concatenate(b);
  a.display();
  getch();
}
