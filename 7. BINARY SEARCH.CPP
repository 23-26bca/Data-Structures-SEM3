//Program to implement binary search.

#include <iostream.h>
#include <conio.h>
void main()
{
int a[25], i, n, item, end, mid, beg, f=0,loc;
cout << "BINARY SEARCH\n ";
cout<<"Enter the limit:";
cin>>n;
cout<<"\n Enter the elements in sorted order:";
for(i=0;i<n; i++)
 {
   cin>>a[i];
 }
cout<<"Enter the element to be searched:";
cin>>item;
beg=0;
end=n-1;
do
{
    mid=(beg + end)/2;
   if(a[mid]==item)
    {
	loc = mid;
	f=1;
	Break;
    }
    else if(item<a[mid])
    {
	end=mid-1;
    }
    else
    {
	beg=mid+1;
    }
}while(beg<=end)
If(f==1)
{
    cout<<"Item  "<<item<<" \t found at location:"<<loc+1;

}
else
{
    cout<<"Item not found";
}
getch ();
}
