#include<iostream>

using namespace std;

int main()
{
	long int result=0,mod=10000000000,t;
	int j;
	for(int i=1;i<=1000;i++)
	{
		t=1;
		for(j=0;j<i;j++)
		{
			t=t*i;
			t=t%mod;
		}
		result=result+t;
		result%=mod;
	}
	cout<<result<<endl;
	return 0;
}