#include<stdio.h>
#include<stdlib.h>
typedef struct node
{
	int data;
	struct node *next;
}node;
void insertatend(node **h,node **t,int d)
{
	node *ptr;
	ptr=(node*)malloc(sizeof(node));
	ptr->data=d;
	ptr->next=NULL;
	if (*h==NULL)
	{
		*h=*t=ptr;
		ptr->next=ptr;
	}
	else
	{
		(*t)->next=ptr;
		ptr->next=*h;
		*t=ptr;
	}
}
void deleteatstart(node **h,node **t)
{
	node *a=*h;
	if ((*h)==(*t))
	{	
		free(*h);
		*h=*t=NULL;
	}
	else
	{
		*h=a->next;
		(*t)->next=(*h);
		free(a);
	}
}
void display(node *h)
{
	node *r=h;
	do
	{
	printf("%d ",h->data);
	h=h->next;
	}
	while(h!=r);
}
main()
{
	node *head=NULL,*tail=NULL;
	int d,ch,flag=0;
	printf("What do you want to do");
	printf("\n1.Insert element");
	printf("\n2.Delete element");
	printf("\n3.Display");
	printf("\n4.exit");
	while(flag==0)
	{
		printf("\nEnter your choice");
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
				display(head);
				break;
			case 4:
				flag++;
				break;
			default:
				printf("Input error");
		}
	}
}
