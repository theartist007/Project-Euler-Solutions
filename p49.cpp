#include<iostream>
#include<cmath>

using namespace std;

int prime(int n)
{
	for(int i=2;i<=sqrt(n);i++)
		if(n%i==0)	return 0;
	return 1;
}

int permute(int n1, int n2)
{
	int m=n1,d,a[10],i=0,c,j;
	while(m>0)
	{
		d=m%10;
		a[i]=d;
		i++;
		m=m/10;
	}
	m=n2;
	while(m>0)
	{
		c=0;
		d=m%10;
		for(j=0;j<i;j++)
			if(a[j]==d)	
				{
					c++;
					break;
				}
			if(c==0)	return 0;
		m=m/10;
	}
	return 1;
}
int main()
{
	int n1,n2,n3,j;
	for(n1=1488;n1<=9999;n1++)
	{
		if(prime(n1)==0)	continue;
			n2=n1+3330;
			n3=n2+3330;
			if(permute(n1,n2)==1 && permute(n2,n3)==1)
				if(prime(n2)==1 && prime(n3)==1)
				{
					cout<<n1<<" "<<n2<<" "<<n3<<endl;
					return 0;
				}
		
	}
}