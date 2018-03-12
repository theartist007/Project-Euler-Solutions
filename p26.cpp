#include<iostream>

using namespace std;

int Lsearch(int a[],int n,int &pos,int r)
{
	if(n==1)	return 140;
	for(int i=0;i<n;i++)
	{
		if(a[i]==r)	
		{
			pos=i;
			return 143;
		}
	}
	return 140;
}

int main()
{
	int r=0,a[1000],i=0,pos=0,dmax=0,nmax=0,d;

	for(int n=2;n<1000;n++)
	{
		r=1;
		i=0;
		while(1)
		{
			r=r%n;
			if(r==0)	break;
			a[i]=r;
			i++;
			if(Lsearch(a,i,pos,r)==143)
			{
				d=i-1-pos;
				if(d>dmax)
				{
					dmax=d;
					nmax=n;
					break;
				}
			}
			r=r*10;
		}
	}
	cout<<nmax<<" "<<dmax<<endl;
	return 0;
}