//Program to perform queue operations using array

#include<iostream.h>
#include<conio.h>
#include<process.h>
#define maxsize 50
int queue[maxsize];
int rear=-1;
int front=-1;

void insertion();
void deletion();
void traverse();


void main()
{
    int choice;
    clrscr();
    do
   {
  cout<<"\n---------------------------";
  cout<<"\nOperations:\n1.Insertion\n2.Deletion\n3.Traversal\n4.Exit";
  cout<<"\nEnter your choice: ";
  cin>>choice;
  switch(choice)
  {
    case 1:insertion();
	   break;
    case 2:deletion();
	   break;
    case 3:traverse();
	   break;
    case 4:exit(0);
           break;
    default:cout << "Invalid choice";
            break;
   } 
   }while(1); 
   getch(
   );
} 

void insertion()
{ 
    int item; 
    if(rear==maxsize-1) 
    cout<<"Queue Overflow"; 
    else
    { 
      cout<<"Enter the item: "; 
      cin >> item; 
      if(front==-1) 
       front=rear = 0; 
      else 
       rear=rear+1; 
      queue[rear] = item; 
      cout<<"\nENQUEUE SUCCESSFUL!";
    }
}

void deletion()
{ 
   if(front==-1) 
   cout<<"Queue Underflow"; 
   else   
   { 
     cout<<"Deleted item: "<<queue[front];
     if(front==rear)
      front=rear=-1; 
     else
      front++; 
   } 
}

void traverse()
{
   if(front==-1) 
    cout<<"Queue Underflow";
   else 
   {
     cout<<"\nTraversed queue:"; 
     for(int i=front;i<=rear;i++)
     cout<<" "<<queue[i];
   }
}
