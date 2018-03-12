#include<iostream>
#include<cmath>

using namespace std;

int prime(long int n)
{
	if(n<=1)	return 0;
	for(long int i=2;i<n;i++)
		if(n%i==0)	return 0;
	return 1;
}

int main()
{
	int c,j;
	for(long int i=35;;i=i+2)
	{
		if(prime(i)==1)	continue;
		c=0;
		for(j=1;j<=i;j++)
		{
			if(prime(i-2*j*j)==1)
			{
				c++;
				break;
			}
		}
		if(c==0)	
		{
			cout<<i<<endl;
			return 0;
		}
	}
}
