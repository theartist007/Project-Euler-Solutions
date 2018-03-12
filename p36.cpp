#include<iostream>

using namespace std;

int palindrome(long int n)
{
    long int k=n,d,a[10],j;
    j=0;
    while(k>0)
    {
        d=k%10;
        a[j]=d;
        j++;
        k=k/10;
    }
    for(k=0;k<j/2;k++)
        if(a[k]!=a[j-1-k])  return 0;
    return 1;
}

int palbin(long int n)
{
    long int x=n,i=0,r,a[20],j,k,t;
    while(x>1)
    {
        r=x%2;
        a[i]=r;
        i++;
        x=x/2;
    }
    a[i]=1;
    i++;
    for(j=0;j<i/2;j++)
        if(a[j]!=a[i-1-j])  return 0;
    return 1;
}

int main()
{
	long int i,s=0;
	for(i=1;i<1000000;i++)
	{
		if(palindrome(i)==1)
			if(palbin(i)==1)
				s=s+i;
	}
	cout<<s<<endl;
	return 0;
}