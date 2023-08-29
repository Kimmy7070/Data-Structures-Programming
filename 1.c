#include<stdio.h>
#include<stdlib.h>
typedef struct node
{
	int data;
	struct node *next;
}node;
void insertatend(node **head,node **tail,int data)
{
	node *q=(node*)malloc(sizeof(node));
	q->data=data;
	if(*head=NULL)
	{
		q->next=q;
		*head=q;
		*tail=q;
	}
	else
	{
		(*tail)->next=q;
		*tail=q;
		q->next=*head;
	}
	
}
void deleteatstart(node **head,node **tail)
{
	int t;
	node *h;
	if(*head==NULL)
	{
		printf("No value to delete");
	}
	else if(*head=*tail)
	{
		h=*head;
		*head=NULL;
		*tail=NULL;
		t=h->data;
		free(h);
		printf("Deleted value is %d",t);
	}
	else
	{
		h=*head;
		*head=h->next;
		(*tail)->next=*head;
		t=h->data;
		free(h);
		printf("Deleted value is %d",t);
	}
}
main()
{
	node *head=NULL,*tail=NULL;
	int t,d,ch,flag=0;
	while(flag==0)
	{
		printf("\nWhat do you want to do");
		printf("\n1.Insert element");
		printf("\n2.Delete element");
		printf("\n3.exit");
		scanf("%d",&ch);
		switch(ch)
		{
			case 1:
				printf("Enter the value you want to insert");
				scanf("%d",&d);
				insertatend(&head,&tail,d);
				break;
			case 2:
				deleteatstart(&head,&tail);
				break;
			case 3:
				flag++;
				break;
			default:
				printf("Input error");
		}
	}
}
