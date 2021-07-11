#include<iostream>
using namespace std;
int calculate(int m,int n)
{ 
int t;
	int sum=0;
	for(int i=m;i<=n;i++)
	{  
		int num=i%10;
		cout<<"num"<<num;
			
		if(num==0||num==5)
		{
			int add=0;
			int j=i;
		
			while(j>0)
			{
				int rem=j%10;
				
				add=add+rem;
				
				j=j/10;
			}
			if(add%3==0)
			{
			
			t=add;
			cout<<"t"<<t;
		}
		}
		sum+=t;
		cout<<"sum"<<sum;
	}
	return sum;
}
int main()
{
	int m,n,result;
	cout<<"Enter starting value";
	cin>>m;
	cout<<"Enter end value";
	cin>>n;
	result=calculate(m,n);
	cout<<"REQUIRED SUM IS"<<result;
	return 0;
	
}
