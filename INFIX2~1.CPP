//Program to perform INFIX TO POSTFIX Conversion.

#include<iostream.h>
#include<conio.h>
#include<ctype.h>
char stack[20];
int top=-1;

void push(char x)
{
  top++;
  stack[top]=x;
}

char pop()
{
 if(top==-1)
 return -1;
 else
 return(stack[top--]);
}

int priority( char x)
{
  if(x=='(')
  return 0;
  else if(x=='+'||x=='-')
  return 1;
  else if(x=='*'||x=='/')
  return 2;
  else if(x=='^')
  return 3;
  else
  return -1;
}
void main()
{
  char exp[20],*e, item;
  clrscr();
  cout<<"INFIX TO POSTFIX";
  cout<<"\nEnter the infix expression: ";
  cin>>exp;
  e=exp;
  while(*e!='\0')
  {
     if(isalnum(*e))
     cout<<*e;
     else if(*e=='(')
     push(*e);
     else if(*e==')')
     {
       while(stack[top]!='(')
       {
	item=pop();
	cout<<item;
       }
       pop();
     }
     else
     {
       if(priority(stack[top])>=priority(*e))
       cout<<pop();
       push(*e);
     }
     e++;
  }


  while(top!=-1)
  cout<<pop();
getch();
}
