#include<stdio.h>
#include<stdlib.h>
typedef struct node
{
	int data;
	struct node*next;
}nodetype;
nodetype*push(nodetype*,nodetype*);
void display1(nodetype*);
nodetype* delete(nodetype*,int);

int main()
{
	int ch,key,num;
	int count=0;
	nodetype*left=NULL;
	nodetype*right=NULL;
	nodetype*p=NULL;

	do
	{
	printf("Enter 1 to insert into queue\n Enter 2 to display value value\n Enter 3 to delete the list\n");
	scanf("%d",&ch);
	
	switch(ch)
	{
		case 1: printf("Enter number to be pushed");
		scanf("%d",&num);
		p=(nodetype*)malloc(sizeof(nodetype));
		if(p!=NULL)
		{
	   	p->data=num;
		}
	
		if(left==NULL)
		{
			left=right=p;
		}
		else
		{
			right=push(right,p);
		}
		right->next=NULL;
	    break;
	    case 2:display1(left);
	    
	    break;
	    case 3: printf("Enter key to be deleted");
	            scanf("%d",&key);
	            nodetype*r;
	            r=left;
		while(r!=NULL)
		{
			count++;
			if(r->data==key)
			{
				left=delete(left,count);
				break;
			}
			
			r=r->next;
		}
		if(r==NULL)
		printf("KEY NOT FOUND");
		break;
	    
	}
	    
	
	
	}
	while(ch<=3);
	return 0;
}
nodetype*push(nodetype*right,nodetype*p)
{
	right->next=p;
	right=p;
	return(right);
}
void display1(nodetype*lf)
{
	if(lf==NULL)
	{
		printf("NO ELEMENT TO DISPLAY");
	}
	while(lf!=NULL)
	{
		printf("%d  ",lf->data);
		lf=lf->next;
	}
}
nodetype*delete(nodetype*left,int count)
{ nodetype*t;
t=left;
	if(count==1)
	{
		left=t->next;
		free(t);
		return(left);
	}
	int i;
	for(i=0;i<count-2;i++)
	{
		t= t->next;
	}
		nodetype*temp;
		temp=t->next;
		t->next=temp->next;
		free(temp);
	return(left);

}
