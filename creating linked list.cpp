#include<stdio.h>
struct node
{
	int data;
	node *next;
};
main()
{
	struct node *head,*head2,*ptr,*r;
	char ch;
	head=NULL,head2=NULL;
	ptr=(struct node*)malloc(sizeof(struct node));
	ptr->data=5;
	ptr->next=NULL;
	head=r=ptr;
	if(head2==NULL)
	{
		head2=ptr;
	}
	else
	{
		while(1)
		{
		printf("Want to make another node?Y/N");
		scanf("%c",&ch);
		if(ch=='Y')
		{
			ptr=(struct node*)malloc(sizeof(struct node));
			ptr->data=10;
			ptr->next=NULL;
			r->next=ptr;
			r=r->next;
		}
	}
}
