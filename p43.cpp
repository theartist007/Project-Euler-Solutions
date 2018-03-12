#include<iostream>

using namespace std;

int prime(long int n)
{
	for(int i=2;i<=n/2;i++)
		if(n%i==0)	return 0;
	return 1;
}

bool check(long int number, int length) {
    int i=0;
    int grid[length];
    while (number>0) {
        grid[i]=number%10;
        if(grid[i]==0)  return false;
        number=number/10;
        i++;
    }
    long int summation=0, factorial=1;
    long int summation1=0, factorial1=1;
    for (int i=0; i<=length-1; i++) {
        factorial=factorial*grid[i];//counts product of digits and factorial of length
        factorial1=factorial1*(i+1);
        summation=summation+grid[i];//counts sum of digits and summation of integers to length
        summation1=summation1+(i+1);
    }
    if ((factorial==factorial1) and (summation==summation1) and (factorial!=0)) return true;
    else return false;
}

int main()
{
	long int i=0,a,max=0,temp;
	for(i=1000000;i<9999999;i++)
	{
		a=0;
		temp=i;
		while(temp>0)
		{
			temp=temp/10;
			a++;
		}
		if(check(i,a)==true && prime(i)==1)
		{
			if(i>max)	max=i;
		}
	}
	cout<<max<<endl;
	return 0;
}