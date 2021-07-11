#include<iostream>
using namespace std;
int isprime(int n)
{
	for(int i=2;i<n/2;i++)
	{
		if(n%i==0)
		return 0;
	}
	return 1;
}
int main()
{
	int num,p;
	cout<<"Enter num and hours";
	cin>>num>>p;
	int count=0;
	int flag=1;
	int i;
	
	
	for( i=5;i<num;i++)
	{
		if(isprime(i))
		{   
	      
	      cout<<"\n";
	      cout<<i;
			while(count<p-1)
			{
			int j=i+12;
			count++;
			if(!isprime(j))
		{
				flag=0;
				break;
		}
		
		
			}
			if(flag==1)
			{
				cout<<i;
				int t=i;
				for(int k=1;k<p;k++)
				{
					 t=t+12;
					cout<<t;
				}
				cout<<"\n";
			}
			
		
			
		}
		if(flag==0)
		continue;;
	}
	return 0;
	
}
