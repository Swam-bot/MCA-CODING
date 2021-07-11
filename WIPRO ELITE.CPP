#include<iostream>
#include<string.h>
using namespace std;   // program to check unchanged position even after string reversal
int main()
{
	char ar[50];
	cout<<"Enter string to check for";
	gets(ar);
	int count=0;
	int l=strlen(ar);
	cout<<"Length is"<<l;
	for(int i=0;i<l;i++)
	{
		if(ar[i]==ar[l-1])
		{
			count++;
		}
		l--;
		
	}
		cout<<"NUMBER OF POSITION UNCHANGED ARE"<<count;
	
	return 0;
}
