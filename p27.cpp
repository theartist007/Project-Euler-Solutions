#include<iostream>
#include<cmath>

using namespace std;

int prime(int n)
{
	if(n<=1)	return 0;
	else
	{
	for(int i=2;i<=sqrt(n);i++)
		if(n%i==0)	return 0;
	}
	return 1;
}
int main()
{
	long int n=0,c,amax=0,bmax=0,max=0,p=0;
	for(int a=-1000;a<=1000;a++)
	{

		for(int b=-1000;b<=1000;b++)
		{
			n=0;
			c=0;
			while(1)
			{
				p=n*n + a*n +b;
				if(prime(p)==1)
					c++;
				else
				{
					if(c>max)
					{
						max=c;
						amax=a;
						bmax=b;
					}
					break;
				}
				n++;
			}
		}
	}
	long int ans;
	ans=amax*bmax;
	cout<<ans<<endl;
	return 0;
}