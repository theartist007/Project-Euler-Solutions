#include<iostream>
#include<cmath>

using namespace std;

int pent(long int n)
{
   long int k;
    k=1+24*n;
    if((int)sqrt(k)==sqrt(k) && (1+(int)sqrt(k))%6==0)
        return 1;
    return 0;
}

int hept(long int h)
{
    long int k;
    k=1+8*h;
    if((int)sqrt(k)==sqrt(k) && (1+(int)sqrt(k))%4==0)
        return 1;
    return 0;

}

int main()
{
	long int i,t;
	for(i=286;;i++)
	{
		t=i*(i+1)/2;
		if(pent(t)==1 && hept(t)==1)
		{
			cout<<t<<endl;
			return 0;
		}
	}
}