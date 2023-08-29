#include<stdio.h>
typedef struct node
{
	int data;
	struct node *next;
}node;
void properinsert(node **h,int data)
{
	node newnode*=(node*)malloc(sizeof(node));
	node *c=*h
	newnode->data=data;
	int i=1
	while(c->data<data&&c->next!=NULL)
	{
		i++;
		c=c->next;
	}
	if(c->bext==NULL)
	{
		c->next=newnode;
		newnode->next==NULL
	}
	else
	{
		newnode->next=c->next;
		c->next=newnode;
	}
}
void deleteAny(node **p,int n)
{
	node *r=*p,*prev;
	int i=1,flag=0;
	if(*p==NULL)
	{
		puts("list empty");
	}	
	else
	{
		if(n==1)
		{
			*p=r->next;
			free(r);
		}
		else
		{
			while(r!=NULL)
			{
				if(i==n)
				{
					flag++;
					break;
				}
				prev=r;
				r=r->next;
				i++;
			}
			if(flag==0)
			{
				printf("Node not found");
			}
			else
			{
				prev->next=r->next;
				free(r);
			}
		}
	}
}
void seperate(node **p)
{
	node *odd,*even,*oc,*ec;
	odd=NULL,even=NULL;
	node *r=*p;
	while(r!=NULL)
	{
		if(r->data%2==0)
		{
			if(even==NULL)
				even=ec=r
				ec->data=r->data
			else
			{
				ec->next=r
				ec=ec->next
			}
		}
		else
		{
			if(odd==NULL)
				odd=oc=n
			else
			{
				oc->next=r
				oc=oc->next
			}
		}
	}
}
void reverse(node **p)
{
	node *ptr1,*ptr2,*ptr3;
	node *r=*p;
	if(*p=r)
}
