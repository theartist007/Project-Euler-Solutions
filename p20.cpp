#include<iostream>
#include<cmath>

using namespace std;

int main()
{
	int a[364],carry=0,k=0,i,j,n=1,m;
	for(i=0;i<363;i++)	a[i]=0;
		a[363]=1;
	for(i=1;i<=100;i++)
	{
		k=363;
		for(j=0;j<n;j++)
		{
			m=a[k]*i+carry;
			carry=m/10;
			a[k]=m%10;
			k--;
		}
	for(j=0;a[j]>0;j++)
		;
		n=364-j;
	}
	int s=0;
	for(i=0;i<364;i++)	s+=a[i];
		cout<<s<<endl;
}