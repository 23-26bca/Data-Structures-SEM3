#include<iostream.h>
#include<conio.h>
void main()
{
 int sparse[10][10],sp[10][10],m,n,i,j,k=0,count=0;
 clrscr();
 cout<<"Enter the order of the matrix:";
 cin>>m>>n;
 cout<<"Enter the elements:"<<endl;
 for(i=0;i<m;i++)
 {
  for(j=0;j<n;j++)
  {
   cin>>sparse[i][j];
   if(sparse[i][j]!=0)
   {
    sp[k][0]=i;
    sp[k][1]=j;
    sp[k][2]=sparse[i][j];
    k++;
    count++;
    }
   }
  }
  cout<<"The Sparse Matrix is"<<endl;
  for(i=0;i<m;i++)
  {
   for(j=0;j<n;j++)
   {
    cout<<sparse[i][j]<<"\t";
   }
   cout<<endl;
  }
  cout<<"The Number of Non zero elements:"<<count<<endl;
  cout<<"The implementation is:"<<endl;
  for(i=0;i<k;i++)
  {
   for(j=0;j<3;j++)
   {
    cout<<sp[i][j]<<"\t";
   }
   cout<<endl;
  }
  getch();
 }
