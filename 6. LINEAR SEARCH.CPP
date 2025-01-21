#include <iostream.h>
#include<conio.h>
void main()
{
    int a[10],n,key, count=0,i;
    clrscr();
    cout<<"Enter Number of elements: ";
    cin>>n;
    cout<<"\nEnter "<<n<<" elements: ";
    for(i=0;i<n;i++)
    cin>>a[i];
    cout<<"\nLINEAR SEARCH";
    cout<<"\nEnter search element: ";
    cin>>key;
    for(i=0;i<n;i++)
    {
       if(a[i]==key)
       {
          cout<<"\n"<<key<<" found at position " <<i+1;
          count++;
       }
    }
    cout<<"\nCOUNT= "<<count;
    getch();
}
