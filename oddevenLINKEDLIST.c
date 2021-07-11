#include<stdlib.h>
#include<stdio.h>
typedef struct node
{
	int data;
	struct node*next;
}nodetype;

nodetype*list();
nodetype*odd(nodetype*);
nodetype*even(nodetype*);
void display(nodetype*);
int main()
{    int ch;
	nodetype*head=NULL,*head1=NULL,*head2=NULL;
	printf("Enter 1 to insert in linkedlist   2 to display even list  3 to display odd list\n");
	scanf("%d",&ch);
	switch(ch)
	{
		case 1:head=insert();
		break;
		case 2:head1=odd(head);
		break;
		case 3:head2=even(head);
		break;
	}
	
	return 0;
}
nodetype*list()
{
	nodetype*p=NULL,*l=NULL,*r=NULL;
	int num,ch;
	do
	{
		printf("Enter number to be inserted in node\n");
		scanf("%d",&num);
		p=(nodetype*)malloc(sizeof(nodetype));
		if(l==NULL)
		{
			l=r=p;
		}
		else
		{
			r->next=p;
			r=p;
		}
		r->next=NULL;
		printf("Press 1 to continue inserting node    else press any other number to exit");
		scanf("%d",&ch);
		
}while(ch==1);
display(l);
return l;
	
}
nodetype*odd(nodetype*head)
{ 
  nodetype*p1=NULL,l1=NULL,r1=NULL;
  int num;

	while(head!=NULL)
	{
		if(head->data%2!=0)
		{ 
		    p1=(nodetype*)malloc(sizeof(nodetype));
			num=head->data;
			p1->data=num;
			if(l1==NULL)
			{
				l1=r1=p1;
			}
			else
			{
				r1->next=p;
				r1=p;
			}
			r1->next=NULL;
			
			}
			head=head->next;
	}
	display(l1);
}
nodetype*odd(nodetype*head)
{ nodetype*p1=NULL,l1=NULL,r1=NULL;
int num;

	while(head!=NULL)
	{
		if(head->data%2==0)
		{ 
		    p1=(nodetype*)malloc(sizeof(nodetype));
			num=head->data;
			p1->data=num;
			if(l1==NULL)
			{
				l1=r1=p1;
			}
			else
			{
				r1->next=p;
				r1=p;
			}
			r1->next=NULL;
			
			}
			head=head->next;
	}
	display(l1);
}
void dsiplay(nodetype*s)
{
	printf("The list is as follows");
	while(s!=NULL)
	{
		printf("%d   ",s->data);
		s=s->next;
	}
}
