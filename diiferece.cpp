#include<iostream>
#include<math.h>
using namespace std;
int main()
{
	int num,d;
	cout<<"ENTER NUMBER TO DIVIDE"; //Find difference of sum of divisibles upto n by k ans sum of non divisibles upto N by k
	cin>>num;
	cout<<"ENTER DIVISOR";
	cin>>d;
	int rem;
	int sum=0;
	int sum1=0;
	int diff=0;
	
	int a[100];
	int i=0;
	int t=1;
	int g=0;
	int p=0;
	while(g<num)
	{
		g=t*d;
		a[i]=t*d;
		
		cout<<"\nNUMBER DIVISIBLE ARE"<<a[i]<<" ";
		sum+=a[i];
		t++;
		
		i++;
	}
	cout<<"\n NON DIVISIBLE SUM";
	for(int i=0;i<t;i++)
	{
		int x=a[i];
		
		for(int j=p+1;j<x;j++)
		{
			cout<<j<<" ";
			sum1=sum1+j;
			
		}
		p=a[i];
	}
	
	

		cout<<"\nsum =   "<<sum;
		cout<<"\n sum1==  "<<sum1;
		diff=abs(sum1-sum);
		cout<<"DIFFERENCE IS"<<diff;
		
	
	
	return 0;
}
