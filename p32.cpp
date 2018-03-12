#include<iostream>

using namespace std;

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
	int i,j;
	long int k;
	for(i=2;i<=9;i++)
	{
		for(j=1000;j<=5000;j++)
		{
			if(j*i>=10000)	continue;
			k=j*100000+(j*i)*10+i;
			if(check(k,9)==true)	cout<<i<<" * "<<j<<" = "<<j*i<<endl;	//I am printing the values so that I can
		}																	//check for redundancy
	}
	for(i=11;i<=99;i++)
	{
		for(j=100;j<=999;j++)
		{
			if(j*i>=10000)	continue;
			k=(j*i)*100000+j*100+i;
			if(check(k,9)==true)	cout<<i<<" * "<<j<<" = "<<j*i<<endl;
		}
	}

	return 0;
}