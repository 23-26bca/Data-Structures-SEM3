#include<iostream.h>
#include<conio.h>
#include<process.h>
#define size 20
int stack[size],item;
int top=-1;

void push();
void pop();
void display();

void main()
{
     int ch;
     clrscr();
     do
     {
      cout<<"\n------------------------------------------------------------";       //optional
      cout<<"\nMENU: \n1.PUSH\n2.POP\n3.DISPLAY\n4.EXIT\nEnter Choice: ";
      cin>>ch;
      switch(ch)
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

    }while(1);
getch();
}

void push()   //definition
{
      if (top==size-1)
      cout<<"Stack Overflow";
      else
      {
cout<<"Enter item to push: ";
cin>>item;
top++;
stack[top]=item;
cout<<"PUSHED SUCCESSFULLY!";
       }
}

void pop ()
{
        if(top==-1)
        cout<<"Stack Underflow"; 
        else 
        {
               cout<<"Popped item ="<<stack[top];
               top--;
         }
  }

void display()
{
 cout<<"The elements are:  "; 
 for(int i=0;i<=top; i++)
 cout<<stack[i]<<"\t";
}
