#include<stdio.h>
#include<stdlib.h>
#include<conio.h>
typedef struct node
{
	int data;
	struct node*next;
}nodetype;

nodetype*push(nodetype*,nodetype*);
void palin(nodetype*);

int main()
{
	nodetype*left=NULL;
	nodetype*right=NULL;
	nodetype*p;
	int num,ch,key;
	do
	{
		printf("Enter 1 for push \n Enter 2 to get number of palindromes");
		scanf("%d",&ch);
		switch(ch)
		{
			case 1: printf("Enter number to be inserted");
			scanf("%d",&num);
				p =(nodetype*)malloc(sizeof(nodetype));
			if(p!=NULL)
			{
			p->data=num;
			if(left==NULL)
			{
				left=right=p;
			}
			else
			
				right=push(right,p);
			
			right->next= NULL;
			}
			else
			printf("NO MEMORY ALLOCATION");
			break;
			
			case 2:palin(left);
		break;
		
		}
	}
	while(ch<3);
	return 0;
}
nodetype*push(nodetype*right,nodetype*p)
{
	right->next=p;
	right=p;
}
void palin(nodetype*left)
{ int value;

int t,sum;
int count;
	while(left!=NULL)
	{     sum=0;
	
		value=left->data;
		t=value;
		while(t!=0)
		{
			int rem=t%10;
			sum=rem+(sum*10);
			t=t/10;
			
		}
		if(value==sum)
		{
			count++;
		}
		
			
		
		
		left =left->next;
		
	}
	printf("THE TOTAL NUMBER OF PALINDROMES ARE %d  ",count);
}

