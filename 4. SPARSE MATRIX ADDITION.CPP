#include<iostream.h>
#include<conio.h>
void main()
{
 int a[10][10],b[10][10],c[10][10],sp[10][10],m,n,i,j,k=0,count=0;
 clrscr();
 cout<<"Enter the order of the matrix:";
 cin>>m>>n;
 cout<<"Enter the elements into 1st matrix:"<<endl;
 for(i=0;i<m;i++)
 {
  for(j=0;j<n;j++)
  {
   cin>>a[i][j];
   }
  }
  cout<<"Enter the elements into 2nd matrix:"<<endl;
 for(i=0;i<m;i++)
 {
  for(j=0;j<n;j++)
  {
   cin>>b[i][j];
   }
  }
 for(i=0;i<m;i++)
 {
  for(j=0;j<n;j++)
  {
   c[i][j]=a[i][j]+b[i][j];
  if(c[i][j]!=0)
   {
    sp[k][0]=i;
    sp[k][1]=j;
    sp[k][2]=c[i][j];
    k++;
    count++;
    }
   }
  }
  cout<<"The Resultant Sparse Matrix is"<<endl;
  for(i=0;i<m;i++)
  {
   for(j=0;j<n;j++)
   {
    cout<<c[i][j]<<"\t";
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
