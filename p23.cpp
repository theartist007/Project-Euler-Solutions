#include<iostream>
#include<cmath>

using namespace std;

long int sum_div(long int n)
{
	long int i,s=0;
	for(i=1;i<=n/2;i++)
		if(n%i==0)	s=s+i;
	return s;
}
/*long int Lsearch(long int b[],long int sum,long int n)
{
	if(n==0)	return 0;
	for(long int i=0;i<n;i++)
	{
		if(b[i]==sum)	return 1;
	}
	return 0;
}*/
int main()
{
	long int i,j,a[28123],s=0,b[28123],n=0,k=0,sum,test[28124];
	for(i=12;i<=28123;i++)
	{
		if(sum_div(i)>i)
		{
			a[k]=i;
			k++;
		}
	}
	for(i=0;i<=28123;i++)	test[i]=0;
	for(i=0;i<k;i++)
	{
		for(j=i;j<k;j++)
		{
			sum=a[i]+a[j];
			if(sum>28123)	break;
			test[sum]++;
		}
	}
	for(i=1;i<=28123;i++)
		if(test[i]==0)	s=s+i;
	cout<<s<<endl;
	return 0;
}		