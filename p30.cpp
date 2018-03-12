#include <iostream>
using namespace std;


int main()
{
	long int i=0,n,s,sum=0,d;
	for(i=10;i<355000;i++)
	{
		n=i;
		s=0;
		while(n>0)
		{
			d=n%10;
			s=s+d*d*d*d*d;
			n=n/10;
		}
		if(s==i)	sum=sum+i;
	}
	cout<<sum<<endl;
}