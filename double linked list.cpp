#include <stdio.h>
#include <stdlib.h>
typedef struct node
{
	int data;
	struct node *next;
	struct node *prev;
}node;
void display(node *p)
{
	node *temp=p;
	while(temp != NULL)
	{
		printf("%d  ",temp->data);
		temp=temp->next;
	}
}
void insertnth(node **p,int pos,int data)
{
	int i=1;
	node *ptr=(node*)malloc(sizeof(node));
	node *temp=*p;
	if(pos==1)
	{
		ptr->data=data;
		ptr->prev==NULL;
		ptr->next=*p;
		*p=ptr;
	}
	else
	{
		while(i<pos-1&&temp!=NULL)
		{
			temp=temp->next;
			i++;
		}
		if(temp==NULL)
			printf("Position not found");
		else{
		ptr->data=data;
		ptr->next=temp->next;
		temp->next=ptr;
		ptr->prev=temp;
		if(ptr->next!=NULL)
			ptr->next->prev=ptr;
	}
	}
}
void deletenth(node **p,int pos)
{
	int i=1;
	node *temp,*ptr;
	temp=ptr=*p;
	if(*p==NULL)
	{
		printf("No node to delete");
	}
	else
	{
		if(pos==1)
		{
			*p=temp->next;
			if(*p!=NULL)
			{
				(*p)->prev==NULL;
				free(temp);
			}	
		}
		else
		{
		while(i<=pos-1&&temp->next==NULL)
		{
			temp=temp->next;
			ptr=ptr->next;
			i++;
		}
		if(temp->next==NULL)
		{
			printf("Deletion not possible");
		}
		else
		{
			ptr=ptr->next;
			temp->next=ptr->next;
			ptr->next->prev=temp;
			free(ptr);
		}
	}
}
}
main()
{
	int ch,data,pos,flag=0;
	node *head=NULL;
	while(flag==0)
	{
	printf("\nEnter your choice");
	printf("\n1.Enter at nth");
	printf("\n2.Delete at nth");
	printf("\n3.Display");
	printf("\n4.Exit");
	scanf("%d",&ch);
	switch(ch)
	{
		case 1:
			printf("\nEnter the postion");
			scanf("%d",&pos);
			printf("\nEnter the data");
			scanf("%d",&data);
			insertnth(&head,pos,data);
			break;
		case 2:
			printf("\nEnter the postion");
			scanf("%d",&pos);
			deletenth(&head,pos);
			break;
		case 3:
			display(head);
			break;
		case 4:
			flag++;
			break;
		}
	}
}
