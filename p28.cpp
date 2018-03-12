#include<iostream>

using namespace std;

int main()
{
	int k=1,s=1;
	for(int i=2;i<=1000;i=i+2)
	{
		for(int j=1;j<=4;j++)
		{
			k=k+i;
			s=s+k;
		}
	}
	cout<<s<<endl;
	return 0;
}