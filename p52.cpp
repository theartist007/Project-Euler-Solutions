#include<iostream>
#include<cmath>

using namespace std;

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
	for(int i=101;;i++)
	{
		if(permute(i,2*i)==1 && permute(i,3*i)==1 && permute(i,4*i)==1 && permute(i,5*i)==1 && permute(i,6*i)==1)
		{
			cout<<i<<" "<<2*i<<" "<<3*i<<" "<<4*i<<" "<<5*i<<" "<<6*i<<endl;
			return 0;
		}
	}
}