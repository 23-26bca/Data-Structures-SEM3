//Program to perform polynomial addition

#include<iostream.h>
#include<conio.h>
struct poly
{

	int coeff;
	int expo;
};

int get(poly p[])
{
	int t,i;
	cout<<"\nEnter no. of terms in the polynomial:";
	cin>>t;
	for(i=0;i<t;i++)
	{
		cout<<"\n TERM"<<i+1<<":";
		cout<<"\nEnter coefficient and exponent:";
		cin>>p[i].coeff>>p[i].expo;
	}
	return t;
}
void display(poly p[10],int t)
{
	int i;
	for(i=0;i<t;i++)
	{
	if(p[i].expo==0)
	cout<<p[i].coeff;
	else if(p[i].expo==1 && i==t-1)
	cout<<p[i].coeff<<"x";
	else if(p[i].expo==1)
	cout<<p[i].coeff<<"x + ";
	else if(p[i].expo>1 && i==t-1)
	cout<<p[i].coeff<<"x^"<<p[i].expo;
	else
	cout<<p[i].coeff<<"x^"<<p[i].expo<<" + ";
	}
}
int add(poly a[],int t1,poly b[],int t2,poly c[])
{
	int i=0,j=0,k=0;
	while(i<t1)
	{
		while(j<t2)
		{
			if(a[i].expo==b[j].expo)
			{
				c[k].coeff=a[i].coeff+b[j].coeff;
				c[k].expo=a[i].expo;
				k++;
				i++;
				j=0;
			}
			else if(i>=t1)
			{
			return k;
			}
			else
			{
				j++;
			}

		}
		c[k].coeff=a[i].coeff;
		c[k].expo=a[i].expo;
		k++;
		i++;
	}
	return k;
}
void main()
{
	struct poly a[10],b[10],c[10];
	int t1,t2,t3;
	clrscr();
	cout<<"First polynomial:";
	t1=get(a);
	cout<<"Second polynomial:";
	t2=get(b);
	cout<<"FIRST:";
	display(a,t1);
	cout<<"\nSECOND:";
	display(b,t2);
	cout<<"\nSUM:";

	if(t1>=t2)
	      {
		t3=add(a,t1,b,t2,c);
		display(c,t3);
	      }
	      else
	      {
		t3=add(b,t2,a,t1,c);
		display(c,t3);
	      }

		getch();
}
