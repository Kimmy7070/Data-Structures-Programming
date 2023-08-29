#include<stdio.h>
#include<stdlib.h>
typedef struct node
{
	int data;
	struct node *next;
}node;
int create()
{
	
}
void insertSpecific(node **p,int n,int t)
{
	node *ptr,*r;
	ptr=(node*)malloc(sizeof(node));
	ptr->data=n;
	r=*p;
	while(r->data!=t)
	{
		r=r->next;
	}
	if(r->next==NULL)
	{
		printf("Node not found");
	}
	else
	{
		ptr->next=r->next;
		r->next=ptr;
	}
}
void insertAtEnd(node **p,int n)
{
	node *ptr,*r;
    ptr=(node *)malloc(sizeof(node));
    ptr->data = n;
    ptr->next = NULL;
    if(*p==NULL)
    {
        *p=ptr;
    }
    else
    {
        r=*p;
        while(r->next!= NULL)
        {
            r=r->next;
        }
        r->next=ptr;
    }
}
int max(node *p)
{
	int max =p->data;
	while(p!=NULL)
	{
		if(p->data>max)
		{
			max=p->data;
		}
		p=p->next;
	}
	return max;
}
int sum(node *p)
{
	int sum=0;
	while(p!=NULL)
	{
		sum+=p->data;
		p=p->next;
	}
	return sum;
}
void deleteLast(node **p)
{
	node *r=*p;
	if(*p==NULL)
	{
		puts("Null list!deletion not possible!");
	}	
	else
	{
		if(r->next==NULL)
		{
			*p=NULL;
			free(r);
		}
		else
		{
			while(r->next->next!=NULL)
			{
				r=r->next;
			}
			free(r->next);
			r->next=NULL;
		}
	}
}
void deleteAny(node **p,int n)
{
	node *r=*p,*prev;
	if(*p==NULL)
	{
		puts("Null list!deletion not possible!");
	}	
	else
	{
		if(r->data==n)
		{
			*p=r->next;
			free(r);
		}
		else
		{
			while(r!=NULL)
			{
				if(r->data==n)
					break;
				prev=r;
				r=r->next;	
			}
			if(r==NULL)
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
void insertAny(node **p,int data,int pos)
{
	node *q=(node*)malloc(sizeof(node));
	node *r=*p;
	int i=1;
	q->data=data;
	if(pos==1)
	{
		*p=q;
		q->next=r;
	}
	else
	{
		while(i!=pos-1&&r!=NULL)
		{
			i++;
			r=r->next;
		}
		if(r==NULL)
			printf("Position not found");
		else
		{
			q->next=r->next;
			r->next=q;
		}
	}
}
void display(node **p)
{
	int i=1;
	node *r=*p;
	while(r->next!=NULL)
	{
		printf("Element %d = %d  ",i,r->data);
		r=r->next;
		i++;
	}
	printf("Element %d = %d  ",i,r->data);
}
main()
{
	int opt,n,p,t;
    node *head = NULL;
    while (1)
    {
        printf("\n1. Insert at the beginning");
        printf("\n2. Insert at the end");
        printf("\n3. Insert at n-th position");
        printf("\n4. Delete first node");
        printf("\n5. Display the data");
        printf("\n6. Insert after specific element");
        printf("\n7. Delete last node");
        printf("\n8. Delete any node");
        printf("\nEnter Option:");
        scanf("%d", &opt);
        switch (opt)
        {
        case 1:
            break;
        case 2:
            printf("\nEnter Data: ");
            scanf("%d",&n);
            insertAtEnd(&head,n);
            break;
        case 3:
            printf("\nEnter Data: ");
            scanf("%d", &n);
            printf("\nEnter the position:");
            scanf("%d",&p);
            insertAny(&head,n,p);
            break;
        case 4:
            break;
        case 5:
        	display(&head);
            break;
        case 6:
        	printf("\nEnter Data: ");
        	scanf("%d",&n);
        	printf("Enter the element after which you want to insert :");
        	scanf("%d",&t);
        	insertSpecific(&head,n,t);
        case 7:
        	deleteLast(&head);
        	break;
        case 8:
        	printf("\nEnter Data: ");
            scanf("%d",&n);
        	deleteAny(&head,n);
        	break;
        default:
            printf("\nInvalid Option!!!");
            break;
        }
    }
}
