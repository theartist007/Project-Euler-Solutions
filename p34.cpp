#include <iostream>
using namespace std;

long int fact(int d)
{
	long int p=1;
	for(int i=2;i<=d;i++)
		p=p*i;
	return p;
}
int main()
{
	long int i=0,n,s,sum=0,d;
	for(i=10;i<2540160;i++)
	{
		n=i;
		s=0;
		while(n>0)
		{
			d=n%10;
			s=s+fact(d);
			n=n/10;
		}
		if(s==i)	sum=sum+i;
	}
	cout<<sum<<endl;
}