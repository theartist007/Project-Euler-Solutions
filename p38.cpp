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
	long int i,k,max=0;
	for(i=9000;i<=9999;i++)
	{
		k=i*100000+i*2;
		if(check(k,9)==true)
		{
			if(k>max)	max=k;
		}
	}
	cout<<max<<endl;
	return 0;
}