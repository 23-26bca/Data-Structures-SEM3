#include<iostream.h>
#include<conio.h>
#include<stdlib.h>
#define maxsize 50
int rear=-1;
int front=-1;
int queue[maxsize];
void insertion();
void deletion();
void traverse();

void main()	
{
 char ch;
 int choice;
 clrscr();
 cout<<"\n Circular queue";
 cout<<"\n 1. Insertion\n 2. Deletion\n 3. Traversal\n4. Exit";
 do
 {
  cout<<"\n Enter your choice";
  cin>>choice;

  switch(choice)
   {
    case 1:
     insertion();
     break;

    case 2:
     deletion();
     break;

    case 3:
     traverse();
     break;

    case 4:
     exit(0);
     break;

    default:
     cout<<"\n Invalid option";
   }
  cout<<"\n Do you want to continue(y/n)";
  cin>>ch;
  }
  while(ch=='Y'||ch=='y');
  exit(0);
  getch();
}

void insertion()
 {
  int item;
  if(front==(rear+1)%maxsize)
   {
    cout<<"\nQueue Overflow";
    return;
   }
  else
   {
    cout<<"\nEnter the item: ";
    cin>>item;
    if(front==-1)
    {
     front=rear=0;
    }
    else
    {
     rear=(rear+1)%maxsize;
    }
    queue[rear]=item;
   }
 }


 void deletion()
 {
  int item;
  if(front==-1)
   {
    cout<<"\nQueue Underflow";
    return;
   }
  else
  {
   item=queue[front];
    if(front==rear)
    {
     front=rear=-1;
    }
    else
    {
     front=(front+1)%maxsize;
    }

    cout<<"\n Deleted item is: "<<item;
   }
  }


  void traverse()
  {
    if(front==-1)
   {
    cout<<"\nQueue Underflow";
    return;
   }
  else
  {
   if(front>rear)
   {
    for(int i=front; front<=maxsize-1;i++)
    {
     cout<<queue[i]<<endl;
    }
    for(int j=0;j<rear; j++)
    {
    cout<<queue[j]<<endl;
    }
   }
   else
   {
    for(int c=front; c<=rear; c++)
    {
      cout<<queue[c]<<endl;
    }
   }
  }
  cout<<endl;
 }
