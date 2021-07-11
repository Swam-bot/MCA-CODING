#include<stdio.h>
#include<stdlib.h>
typedef struct node
{
	int data;
	struct node*next;
}nodetype;
nodetype*oddlist(int,nodetype*,nodetype*);
nodetype*evenlist( int,nodetype*,nodetype*);
void display(nodetype*);
int main()
{   do
{
	 int num,ch;
	 nodetype*r1=NULL,l1=NULL;
	 nodetype*r=NULL,l=NULL;
	printf("Enter value to be inserted ");
	scanf("%d",&num);
	if(num%2==0)
	{
		r1=oddlist(num);
		if(l1==NULL)
		{
			l1=r1;
		}
	}
	else
	r=evenlist(num,r,l);
	if(l==NULL)
	{
		l=r;
	}
	printf("To continue inserting number in linked list press 1 else press any number\n");
	scanf("%d",&ch);
}while(ch==1);
printf("Even linked list is");
display(l);
printf("odd linked list is");
display(l1);

	return 0;
}
nodetype*evenlist(int num,nodetype*r1,nodetype*l1)
{
	nodetype*p1=NULL;
	p1=(nodetype*)malloc(sizeof(nodetype));
	p1->data=num;
	if(r1==NULL)
	{
		r1=p1;
	}
	else
	{
		r1->next=p1;
		r1=p1;
	}
	r1->next=NULL;
	return r1;
}
nodetype*oddlist(int num,nodetype*r,nodetype*l)
{
	nodetype*p=NULL,r=NULL,l=NULL;
	p=(nodetype*)malloc(sizeof(nodetype));
	p->data=num;
	if(r==NULL)
	{
		r=p;
	}
	else
	{
		r->next=p;
		r=p;
	}
	r->next=NULL;
	return r;
}
void display(nodetype*s)
{
	while(s!=NULL)
	{
		printf("%d  ",s);
		s=s->next;
	}
}
