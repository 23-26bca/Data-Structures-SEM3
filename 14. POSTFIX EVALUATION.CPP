//Program to perform postfix evaluation

#include<iostream.h>
#include<conio.h>
#include<math.h>
void main()
{
    char postfix[20],c;
    int stack[10];
    int i,top=0;
    clrscr();
    cout<<"Enter the Postfix Expression: ";
    cin>>postfix;
    for(i=0;postfix[i]!='\0';i++)
    {
        c=postfix[i];
        switch(c)
        {
           case '^' : stack[top-1]=pow(stack[top-1],stack[top]);
                            top--;
                            break;
                     
           case '*' : stack[top-1]=stack[top-1]*stack[top];
                           top--;
                           break;
                      
           case '/' : stack[top-1]=stack[top-1]/stack[top];
                           top--;
                           break;  


                      

           case '+' : stack[top-1]=stack[top-1]+stack[top];
                            top--;
                            break;   
           case '-' :  stack[top-1]=stack[top-1]-stack[top];
                            top--;
                            break; 
           default :  top++;
                            stack[top]=c-48;     //type casting( char to int )  
        }
    }
    cout<<"\nThe result= "<<stack[top];
     getch();
}
