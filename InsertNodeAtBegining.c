#include<stdlib.h>
#include<stdio.h>
struct node
{
	int data;
	struct node*next;
}
struct node*head;  //GLOBAL VARIABLE
int main()
{
	head=NULL;
	printf("HOW many nodes you want to insert");
	int n,i,x;
	scanf("%d",&n);
	for( i=0;i<n;i++)
	{
		printf("ENTER NUMBER");
		scanf("%d",&x);
		insert(x);
		print();
	}
}
void insert(int x)
{
	node*temp=(node*)malloc(size0f(struct node));
	temp->data=x;
	temp->next=head;;
	head=temp;
}
void print()
{
	struct*node temp=head;  //store addressof head variable in temp so that we modify temp not head
	while(temp!=NULL)
	{
		printf("%d",temp->data);
		temp=temp->next;
	}
	printf("\n");
	
}
