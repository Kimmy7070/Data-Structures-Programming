#include<stdio.h>
#include<stdlib.h>
struct node{
	int data;
	struct node *next;
};
void insert_from_end(struct node**,struct node**,int);
void display(struct node*);
int isempty(struct node*);
void delete_from_beg(struct node**,struct node**);
int main(){
	struct node *head=NULL,*tail=NULL;
	int i,j,k,l;
	while(1){
	printf("\n1 for insert from end");
	printf("\n2 for dispaly");
	printf("\n3 for delete from begening");
	printf("\nenter your choice=");
	scanf("%d",&k);
	switch(k){
		case 1:{
			printf("enter data=");
			scanf("%d",&j);
			insert_from_end(&head,&tail,j);
			break;
		}
		case 2:{
			if (isempty(head)!=1)
			{
				printf("elements of nodes are=");
				display(head);
			}
			else
			printf("empty list");
			break;
		}
		case 3:{
			if (isempty(head)!=1)
			{
				delete_from_beg(&head,&tail);
			}
			else
			printf("empty list");
			break;
		}
		}
	}

	return 0;
}

void insert_from_end(struct node **h,struct node **t,int k)
{
	struct node *a,*ptr;
	ptr=(struct node*)malloc(sizeof(struct node));
	ptr->data=k;
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

int isempty(struct node *a)
{
	if (a==NULL)
	return 1;
	else
	return 0;
}

void display(struct node *a)
{
	struct node *b=a;
	do
	{
	printf("%3d",a->data);
	a=a->next;
	}while(a!=b);
}

void delete_from_beg(struct node **h,struct node **t)
{	
	struct node *a=*h;
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
