//Program to implement linked stack

#include<iostream.h>
#include<conio.h>
#include<process.h>
struct node
{
  int data;
  struct node *link;
}*head=NULL, *top=NULL, *temp, *ptr;

void push();
void pop();
void display();

void main()
{
 int choice;
 clrscr();
 cout<<"STACK IMPLEMENTATION USING LINKED LIST ";
 do
 {
   cout<<"\nMENU:\n1.PUSH\n2.POP\n3.DISPLAY\n4.EXIT\nEnter Choice: ";
   cin>>choice;
   switch(choice)
   {
     case 1: push();
	     break;
     case 2: pop();
	     break;
     case 3: display();
	     break;
     case 4: exit(0);
	     break;
     default: cout<<"INVALID OPTIONS";
	      break;
   }
 }
 while(1);
getch(
);
}

void push()
{
  node *newnode= new node;
  cout<<"Enter data: ";
  cin>>newnode->data;
  if(head->link==NULL)
  {
    head->link=newnode;
    newnode->link=NULL;
    top=newnode;
  }
  else
  {
    newnode->link=top;
    head->link=newnode;
    top=newnode;
  }
}

void pop()
{
 if(top==NULL)
 {
   cout<<"\nStack underflow";
   getch();
   exit(0);
 }
 else
 {
   cout<<"Popped item is: "<<top->data;
   ptr=top->link;
   delete(top);
   top=ptr;
   temp=top;

 }
}

void display()
{
 cout<<"The elements are:";
 temp=top;
 while(temp!=NULL)
 {
   cout<<temp->data<<" ";
   temp=temp->link;
 }

}
