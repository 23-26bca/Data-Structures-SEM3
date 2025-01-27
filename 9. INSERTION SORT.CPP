//Program to implement insertion sort

#include <iostream.h >
#include <conio.h >
void insertion_sort(int[],int);

void main()
{
   int a[50],n, i;
   cout<<"Enter the size of the array:";
   cin>>n;
   cout<<"Enter the elements:";
   for(i=0;i<n; i++)
   {
       cin>>a[i];
   }
   insertion_sort(a, n);
   cout<<"The sorted array is :";
   for(i=0;i<n; i++)
   {
       cout<<a[i]<<""<<endl;
   }
    getch();
}
void insertion_sort(int a[],int n)
{
    int key, j;
    for( int i=1;i<n; i++)
    {
	j=i;
       while(j>0&&a[j-1]>a[j])
       {
	key=a[j];
	a[j]=a[j-1];
	a [j-1]=key;
	j--;
       }
    }
}


