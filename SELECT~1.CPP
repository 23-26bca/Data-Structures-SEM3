#include <iostream.h >
#include <conio.h>
void selection_sort(int[],int);
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
   selection_sort(a, n);
   cout<<"The sorted array is :";
   for(i=0;i<n; i++)
   {
       cout<<a[i]<<""<<endl;
   }
 getch();
}
void selection_sort(int a[],int n)
{
    int min, temp, j;
    for(int i=0;i<n-1;i++)
    {
	min=i;
	for(j=i+1;j<n; j++)
	{
	    if(a[j]<a[min])
	    {
		min=j;
	    }
	}
	temp=a[i];
	a[i]=a[min];
	a[min]=temp;
    }
}
