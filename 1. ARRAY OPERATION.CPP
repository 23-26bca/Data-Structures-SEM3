//Menu driven program to perform array operation

#include<iostream.h>
#include<conio.h>
#include<process.h>
void main()
{
   int a[20],n,i,ch,p,item;
   clrscr();
   cout<<"Enter no. of elements:";
   cin>>n;
   cout<<"Enter " <<n<<" elements: " ;
   for(i=0;i<n;i++)
   cin>>a[i];
   do
   {
   cout<<"\nMENU:\n 1.TRAVERSAL\n 2.INSERTION \n 3.DELETION\n 4.EXIT";
   cout<<"\nEnter Choice:";
   cin>>ch;
   switch(ch)
   {
     case 1: cout<<"\nTRAVERSAL:"  ;
		   cout<<"\nThe elements are: ";
		   for(i=0;i<n;i++)
		   cout<<"  "<<a[i];
		   break;


     case 2: cout<<"\nINSERTION:";
		   cout<<"\nEnter position to insert:";
		   cin>>p;
		   for(i=n-1;i>=p-1;i--)
		  {
		   a[i+1]=a[i];
		   if(i==p-1)
		   {
			cout<<"Enter Element:";
			cin>>item;
			a[p-1] = item;
			n++;
		   }
		  }
		  break;
    case 3: cout<<"\nDELETION:";
		  cout<<"\nEnter position to delete: ";
		  cin>>p;
		  for(i=p-1;i<n;i++)
		  a[i]=a[i+1];
		  n--;
		  break;
    case 4: exit(0);
	    break;
    default: cout<<"INVALID OPTION";
		  break;
   }
   } while(1);
    getch();
}
