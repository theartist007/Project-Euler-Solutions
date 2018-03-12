#include<iostream>
#include<cmath>

using namespace std;

long int reverse(long int n)
{
	long int k=n,d,rev=0;
	while(k>0)
	{
		d=k%10;
		rev=rev*10+d;
		k=k/10;
	}
	return rev;
}
int palindrome(long int k)
{
	long int j=reverse(k);
	if(j==k)	return 1;
	return 0;
}
int main()
{
	long int i,j,k,r,c,ly=0;
	for(i=11;i<10000;i++)
	{
		k=i;
		c=0;
		r=0;
		do{
			j=reverse(k);
			k=k+j;
			c++;
			if(palindrome(k)==1)
			{
				r++;
				break;
			}
		}while(c<50);
		if(r!=1)	ly++;

	}
	cout<<ly<<endl;
	return 0;
}
