#include<iostream>

using namespace std;

int pent(long int n)
{
    long int j;
    j=1+24*n;
    for(long int k=1;k<=j;k++)
        if(j==k*k)    
        {
            if((1+k)%6==0)  return 1;
        }
    return 0;
}

int main()
{
long int result = 0;
bool notFound = true;
long int i = 1;
 
while (notFound) {
    i++;
  long int n = i * (3 * i - 1) / 2;
 
    for (long int j = i-1; j > 0; j--) {
       long int m = j * (3 * j - 1) / 2;
        if (pent(n - m) && pent(n + m)) {
            result = n-m;
            notFound = false;
            break;
        }
    }
}

/*	long int j,k,a,b,d;
	for(j=1;;j++)
	{
		a=j*(3*j-1)/2;
		for(k=j-1;k>0;k--)
		{
			b=k*(3*k-1)/2;
			if(pent(a+b)==1 && pent(a-b)==1 )
			{
				cout<<a-b<<endl;
				return 0;
			}
	
		}
*/	
}
