//Program to arrange a Singly Linked List in Ascending Order of data.

#include<iostream.h>
#include<conio.h>
#include<process.h>
struct node
{
 int data;
 struct node *link;

}*head=NULL, *temp, *ptr;

void insertion(int item)
{
    node *newnode=new node;
    newnode->data=item;
    if(head->link==NULL)
    {
      head->link=newnode;
      newnode->link=NULL;
    }
    else
    {
       temp=head->link;
       while(temp->link!=NULL)
	temp=temp->link;
       temp->link=newnode;
       newnode->link=NULL;
    }
}

void sort(int n)
{
  int item;
  if(head->link==NULL)
  {
    cout<<"List is empty";
    return;
  }
  else
  {
    for(int i=0;i<n;i++)
    {
       temp=head->link;
       while(temp->link!=NULL)
       {
	  ptr=temp;
	  temp=temp->link;
	  if(temp->data<ptr->data)
	  {
	    item=temp->data;
	    temp->data=ptr->data;
	    ptr->data=item;
	  }
       }
    }
  }
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
  while(temp!=NULL)
  {
   cout<<temp->data<<" ";
   temp=temp->link;
  }
}

void main()
{
 int n,item;
 clrscr();
 cout<<"Enter number of elements in the list: ";
 cin>>n;
 for(int i=0;i<n;i++)
 {
   cout<<"Enter data:";
   cin>>item;
   insertion(item);
 }
 cout<<"\nBefore Sorting:";
 display();
 sort(n);
 cout<<"\nAfter Sorting: ";
 display();
getch();
}

