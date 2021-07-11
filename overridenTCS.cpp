#include<iostream>
using namespace std;

int main()
{
	int ar[100],n;
	cout<<"ENTER NUMBER OF ARRAY ELEMENTS";
	cin>>n;
	cout<<"Enter the elements";
	for(int i=0;i<n;i++)
	{
		cin>>ar[i];
	}

	int i;

	for( i=1;i<=n;i++)
	{
			int count=1;
		for(int j=0;j<n;j++)
		{
			if(ar[j]==i)
			{
				count=0;
				continue;
				
			}
			
		}
		if(count==1)
		{
			break;
		}
		
		
	}
	cout<<"THE OVERRIDEN VALUE IS"<<i;
	return 0;
}
