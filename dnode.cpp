#include<stdio.h>
#include<stdlib.h>
typedef struct node
{
	int data;
	struct node *next;
	struct node *prev;
}node;
void deletelast(node **p)
{
	node *r=*p;
	if(*p==NULL)
	{
		printf("No node found");
	}
	else if(r->next==NULL)
	{
		*p=NULL;
		free(r);
	}
	else
	{
		while(r->next!=NULL)
		{
			r=r->next;
		}
		(r->prev)->next=NULL;
		free(r);
	}
}
