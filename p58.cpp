#include<iostream>
#include<cmath>

using namespace std;

int isprime(long int n)
{
	for(long int i=2;i<=sqrt(n);i++)
		if(n%i==0)	return 0;
	return 1;
}
int main()
{

	int k=1,s=1,d,a[1000000000],m=0,i,n=0;
	double ratio=0;
	for(d=3;;d++)
	{	n=0;
		for(i=2;i<=d-1;i=i+2)
		{
			for(int j=1;j<=4;j++)
			{
				k=k+i;
				a[m]=k;
				m++;
			}
		}
		for(i=0;i<m;i++)
			if(isprime(a[i])==1)	n++;
		ratio=(double)(n)/m;
		if(m<(double).1)	
		{
			cout<<d<<endl;
			return 0;
		}
	}
}