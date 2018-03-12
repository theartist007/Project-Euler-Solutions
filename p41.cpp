  #include <iostream>
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
    long int i,j,p,temp,d,n=0,a[10];
    for(i=0;i<9;i++)   a[i]=0;
    for(i=5000;i<9999;i++)
    {
        p=i*2;
        temp=i;
        j=0;
        while(temp>0)
        {
            d=temp%10;
            a[j]=d;
            j++;
            temp=temp/10;
        }
        temp=p;
        while(temp>0)
        {
            d=temp%10;
            a[j]=d;
            j++;
            temp=temp/10;
        }
        for(j=0;j<=4;j++)
        {
            temp=a[j];
            a[j]=a[8-j];
            a[8-j]=temp;
        }

        for(j=0;j<9;j++)
            n=n*10+a[j];
        if(check(n,9)==true)
        {
            cout<<n<<endl;
        }
    }
    return 0;
}