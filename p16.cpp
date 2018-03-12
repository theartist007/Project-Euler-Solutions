#include<iostream>

using namespace std;

int main()
{
	int a[302],carry=0,k=0,i,j,n=1,m;
	for(i=0;i<301;i++)	a[i]=0;
		a[301]=1;
	for(i=1;i<=1000;i++)
	{
		k=301;
		for(j=0;j<n;j++)
		{
			m=a[k]*2+carry;
			carry=m/10;
			a[k]=m%10;
			k--;
		}
	for(j=0;a[j]>0;j++)
		;
		n=302-j;
	}
	int s=0;
	for(i=0;i<302;i++)	s+=a[i];
		cout<<s<<endl;
	return 0;
}