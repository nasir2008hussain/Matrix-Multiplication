#include<iostream>
#include<cstdlib>
#include<iomanip>
using namespace std;
int main()
{
	int a[7][7];
	int b[7][7];
	int c[7][7];
	int i,j,k;
	for(i=0;i<7;i++)
	{
		for(j=0;j<7;j++)
		{
			a[i][j]=rand()%10+10;
			b[i][j]=rand()%10+10;
		}
	}
	int ad;
	for(i=0;i<7;i++)
	{
		for(k=0;k<7;k++)
		{
		  ad=0;
		  for(j=0;j<7;j++)
		    {
			 ad=ad+a[i][j]*b[j][k];
			 c[i][k]=ad;
			}
		}
	}
	cout<<"   Two Diamensional Array 1"<<setw(33)<<"Two Diamensional Array 2"<<setw(45)<<"Multipication Of Array 1 and Array 2\n";
	cout<<endl;
	for(i=0;i<7;i++)
	{
		for(j=0;j<7;j++)
		{ 
			cout<<setw(4)<<a[i][j]<<setw(-50);
			if(i==3 && j==6)
			{
				cout<<"  *";
			}
			 
		}
		cout<<"\t";
		for(j=0;j<7;j++)
		{
			cout<<setw(4)<<b[i][j]<<setw(-50);
			if(i==3 && j==6)
	         { 
			 cout<<"  =";
			 }
		}
		cout<<"\t";
		for(j=0;j<7;j++)
		{
			cout<<setw(6)<<c[i][j]<<setw(6);
		}
		cout<<endl;
	}
}
