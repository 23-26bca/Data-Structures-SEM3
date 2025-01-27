//Program to find transpose of a sparse matrix.

#include <iostream.h>
#include<conio.h>
void main()
{
   int sparse[10][10],sp[10][10];
   int m,n,count=0,i,j,k=0,temp;
   clrscr();
   cout<<"Enter the order of the sparse matrix:";
   cin>>m>>n;
   temp=n;
   for(i=0;i<m;i++)
   {
          cout<<"\nROW"<<i+1<<":\n";
          cout<<"Enter "<<temp<<" elements: ";
          for(j=0;j<n;j++)
          {
        cin>>sparse[i][j];
        if(sparse[i][j]!=0)
        {
           sp[k][0]=i;
           sp[k][1]=j;
           sp[k][2]=sparse[i][j];
           count++;
           k++;
        }
         }
   }
   


cout<<"\nThe sparse matrix is:";
for(i=0;i<m;i++)
 {  
      cout<<"\n";
      for(j=0;j<n;j++)
      cout<<sparse[i][j]<<"\t";
  }   
   cout<<"\nSparse Matrix Representation:";
   cout<<"\nNumber of non zero elements:"<<count;
   cout<<"\n\nROW\tCOL\tVALUE";
   for(i=0;i<k;i++)
   {  
      cout<<"\n";
      for(j=0;j<3;j++)
      cout<<sp[i][j]<<"\t";
    }

   cout<<"\nTRANSPOSE: ";
   for(i=0;i<3;i++)
   {  
      cout<<"\n";
      for(j=0;j<k;j++)
      cout<<sp[j][i]<<"\t";
    }
  
   getch();
}
