#include<iostream>

using namespace std;

int main()
{
	int x1,x2,x3,x4,x5,x6,x7,x8,c=0;
	for(x1=0;x1<=200;x1++)
	{
		for(x2=0;x2<=100;x2++)
		{
			for(x3=0;x3<=40;x3++)
			{
				for(x4=0;x4<=20;x4++)
				{
					for(x5=0;x5<=10;x5++)
					{
						for(x6=0;x6<=4;x6++)
						{
							for(x7=0;x7<=2;x7++)
							{
								for(x8=0;x8<=1;x8++)
								{
									if((x1+2*x2+5*x3+10*x4+20*x5+50*x6+100*x7+200*x8)==200)
										c++;
								}
							}
						}
					}
				}
			}
		}
	}
	cout<<c<<endl;
	return 0;
}