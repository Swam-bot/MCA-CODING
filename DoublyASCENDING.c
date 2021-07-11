#include<stdio.h>
#include<stdlib.h>
typedef struct node  //this program arrange nodes in ascending order
{
	int data;
	struct node *prev;
	struct node *next;
	
}nodetype;
void insert(nodetype**,nodetype**);
void display(nodetype*);
int main()
{
	int ch;
	nodetype*head=NULL;
	nodetype*tail=NULL;

	do
	{
		printf("Enter 1 to insert \n Entwr 2 to display");
		scanf("%d",&ch);
		switch(ch)
		{
			case 1: insert(&head,&tail);
			break;
			case 2: display(head);
			break;
		}
	}while(ch<3);
	return 0;
}
void insert(nodetype**head,nodetype**tail)
{
	nodetype*p;
	int num;
	p=(nodetype*)malloc(sizeof(nodetype));
	printf("Enter data to be inserted");
	scanf("%d",&num);
	p->data=num;
	p->prev=NULL;
	p->next=NULL;
	if(*tail==NULL)
	{ 
	 	*head=*tail=p;
	}
	else if(p->data>(*tail)->data)
	{
		p->prev=*tail;
		(*tail)->next=p;
		*tail=p;
	}
		
	else if(p->data<(*head)->data)
	{
		p->next=*head;
		(*head)->prev=p;
		*head=p;
	}
	else
	{
		nodetype*temp;
		nodetype*temp1;
		temp=*head;
		while(temp->data<=num)
		{
			temp=temp->next;
		}
		temp1=temp->prev;
		p->prev=temp1;
		p->next=temp;
		temp->prev=p;
	}	
}

void display(nodetype*head)
{ 
    printf("Element to be displayed is");
	while(head!=NULL)
	{
		printf("%d",head->data);
		printf(" ");
		head=head->next;	
	}
}
