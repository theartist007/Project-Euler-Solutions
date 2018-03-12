#include<iostream>
#include<cmath>

using namespace std;

int sum_digits_pow(int a,int b,int digits)
{
		int c[digits],carry=0,k=0,i,j,n=1,m;
			for(i=0;i<digits-1;i++)	c[i]=0;
				c[digits-1]=1;
			for(i=1;i<=b;i++)
			{
				k=digits-1;
				for(j=0;j<n;j++)
				{
					m=c[k]*a+carry;
					carry=m/10;
					c[k]=m%10;
					k--;
				}
			for(j=0;c[j]>0;j++)
				;
				n=digits-j;
			}
			int s=0;
			for(i=0;i<digits;i++)	s+=c[i];
				return s;
			
}

int main()
{
	int a,b,sum,max=0,digits,amax=0,bmax=0;
	for(a=2;a<100;a++)
	{
		for(b=1;b<100;b++)
		{
			digits=floor((double)(b*(double)log10(a)))+1;
			sum=sum_digits_pow(a,b,digits);
			if(sum>max)	
				{
					amax=a;
					bmax=b;
					max=sum;
				}
		}
	}
	cout<<amax<<" "<<bmax<<" "<<max<<endl;
	return 0;

}