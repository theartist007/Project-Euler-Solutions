#include<iostream>

using namespace std;

int main()
{
	int ab,c,a,bc,k=0,ca,num[10],den[10],i;
	for(ab=12;ab<100;ab++)
	{
		if((ab%10==0) || (ab/10==ab%10))	continue;
		for(c=1;c<=9;c++)
		{
			bc=(ab%10)*10+c;
			a=ab/10;
			if(c*ab==bc*a)
			{
				num[k]=ab;
				den[k]=bc;
				k++;
			}
			ca=c*10+a;
			if(c*ab==(ab%10)*ca)
			{
				num[k]=ab;
				den[k]=ca;
				k++;
			}	
		}
	}
	for(i=0;i<k;i++)
		cout<<num[i]<<" / "<<den[i]<<endl;
	return 0;
}