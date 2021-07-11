#include<iostream>

using namespace std;
int rich(int);
int lousi(int num)

{
	
	if(num==1)
	{
		cout<<"lousi wins";
		return 0;
	}

int temp=num;
int n;
int flag;
while(temp!=1)
{
	 flag=0;
	n=temp%2;
	if(n==1)
	{
		flag=1;
		break;
	}
	temp=temp/2;
	}
if(flag==0) //power of 2
{
	int t=num/2;
	if(t==1)
	{
		cout<<"HURRAY !!!!LOUSI WINS";
		return 0;
	}
	
rich(t);
}
if(flag==1)  //not power of 2
{
		
	int n,p;
	int f;
	int temp;
	for(int i=num;i>0;i--)
	{
	temp=i;
			while(temp!=1)
		{
			f=0;
			n=temp%2;
			temp=temp/2;
			if(n==1)
			{
				f=1;
				break;
			}
			
		}
		if(f==0)
		{
			p=i;
			break;
		}
		
	}
	
	if(p==1)
	{
		cout<<"LOUIS WINS";
		return 0;
	}
	rich(num-p);
   }
}
   
int rich(int num)
{
	if(num==1)
	{
		cout<< "Richard wins";
		return 0;
	}

int temp=num;
int n;
int flag;
while(temp!=1)
{
	 flag=0;
	n=temp%2;
	if(n==1)
	{
		flag=1;
		break;
	}
	temp=temp/2;
	}
if(flag==0) //power of 2
{
	int t=num/2;
	if(t==1)
	{
		cout<<"HURRAY !!!!Richard WINS";
		return 0;
	}
	
lousi(num/2);
}
if(flag==1)  //not power of 2
{
	int n,p;
	int f;
	int temp;
	
	for(int i=num;i>0;i--)
	{ 
	temp=i;
		
	
		while(temp!=1)
		{
			f=0;
			n=temp%2;
			temp=temp/2;
			if(n==1)
			{
				f=1;
				break;
			}
		
		}
		if(f==0)
		{
			p=i;
			break;
		}
			}
	if(p==1)
	{
		cout<<"LOUIS WINS";
		return 0;
	}
	lousi(num-p);
}
}
int main()
{
	int num;
	
	cout<<"Enter number of your choice";
	
	cin>>num;
	lousi(num);
	return 0;
}
