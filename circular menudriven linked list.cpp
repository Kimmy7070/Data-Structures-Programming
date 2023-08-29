#include <stdio.h>
#include <stdlib.h>
typedef struct node{
	int data;
	struct node *next;
}node;
void display(node *p)
{
	node *r=p;
	printf("\n The node :");
	do
	{
		printf("%d ",r->data);
		r=r->next;
	}while(r!=p);
}
void insatend(node **p,int n)
{
	node *r=*p;
	node *newnode=(node*)malloc(sizeof(node));
	newnode->data=n;
	if(*p==NULL)
	{
		*p=newnode;
		newnode->next=newnode;
	}
	else
	{
		while(r->next!=*p)
		{
			r=r->next;
		}
		r->next=newnode;
		newnode->next=*p;
	}
}
void insertnth(node **p,int n,int pos)
{
	int i = 1;
	node *r=*p;
	node *newnode=(node*)malloc(sizeof(node));
	newnode->data=n;
	if(pos == 1)
	{
		if(*p==NULL)
		{
			*p=newnode;
			newnode->next=newnode;
		}
	else
	{
		while(r->next!=*p)
			r=r->next;
		r->next=newnode;
		newnode->next=*p;
		*p=newnode;
	}
	}
	else 
	{
		while(r->next!=*p&&i!=pos-1)
		{
			r=r->next;
			i++;
		}
		newnode->next=r->next;
		r->next=newnode;
	}
}
void deletefirstnode(node **p)
{
	node *r=*p;
	node *q=*p;
	if(*p==NULL)
	{
		printf("No node to delete");
	}
	else
	{
		while(r->next!=*p)
			{
				r=r->next;
			}
	}
	r->next=q->next;
	*p=q->next;
	r=r->next;
	free(r);
}
void deletenth(node **p,int pos)
{
	int i = 1;
	node *r=*p;
	node *q=*p;
	if(*p==NULL)
	{
		printf("No node to delete");
	}
	else if(pos==1)
	{
		deletefirstnode(&r);
	}
	else
	{
		while(r->next!=*p&&i!=pos-1)
		{
			r=r->next;
			i++;
		}
		r->next=r->next->next;
		r=r->next;
		free(r);
	}
}
main()
{
	node *head;
	int c,num,pos,flag=0;
	while(flag==0)
	{
	printf("\nEnter what you want to do?");
	printf("\n1.Display node");
	printf("\n2.Insert node at end");
	printf("\n3.Insert node at nth");
	printf("\n4.delete first node");
	printf("\n5.delete nth node");
	printf("\n6.exit");
	scanf("%d",&c);
	switch (c)
	{
		case 1:
			display(head);
			break;
		case 2:
			printf("Enter the number you want to insert at end");
			scanf("%d",&num);
			insatend(&head,num);
			break;
		case 3:
			printf("Enter the number you want to insert");
			scanf("%d",&num);
			printf("Enter the position");
			scanf("%d",&pos);
			insertnth(&head,num,pos);
			break;
		case 4:
			deletefirstnode(&head);
			break;
		case 5:
			printf("Enter the position");
			scanf("%d",&pos);
			deletenth(&head,pos);
			break;
		case 6:
			flag++;
			break;
	}		
	}
}
