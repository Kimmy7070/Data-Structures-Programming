#include<stdio.h>
#include<stdlib.h>
#include<ctype.h>
typedef struct poly
{
	int cof;
	int pow;
	struct poly *next;
}poly;
void create(poly **p,int c,int po)
{
	poly *ptr,*r,*q,*t;
	r=*p;
	ptr=(poly*)malloc(sizeof(poly));
	ptr->cof=c;
	ptr->pow=po;
	if(r==NULL)
	{
		ptr->next=*p;
		*p=ptr;
	}
	else
	{
		if(r->pow<ptr->pow)
		{
			*p=ptr;
			ptr->next=r;
		}
		else
		{
			q=r;
			r=r->next;
			while((q->next)->pow>ptr->pow&&r!=NULL)
			{
				q=q->next;
				r=r->next;
			}
			q->next=ptr;
			ptr->next=r;
		}
	}
}
void display(poly *head)
{
	poly *r=head;
	while (r!=NULL)
	{
		if(r->pow==0&&r->next==NULL)
			printf("%d",r->cof);
		else if(r->pow!=0&&r->next==NULL)
			printf("%dx^%d",r->cof,r->pow);
		else
			printf("%dx^%d +",r->cof,r->pow);
		r=r->next;
	}
}
poly add(poly **head3,poly *head1,poly *head2)
{
	poly *p,*q;
	poly *r=*head3;
	p=head1;
	q=head2;
	while(p!=NULL&&q!=NULL);
	{
		if(head3==NULL)
		{
			if(p->pow>q->pow)
			{
				r=p;
				p=p->next;
				r->next=NULL;
			}
			else if(p->pow<q->pow)
			{
				r=q;
				q=q->next;
				r->next=NULL;
			}
			else
			{
				q->cof+=p->cof;
				r=q;
				q=q->next;
				p=p->next;
				r->next=NULL;
			}
		}
		else
		{
			if(p->pow>q->pow)
			{
				r->next=p;
				p=p->next;
				r->next=NULL;
			}
			else if(p->pow<q->pow)
			{
				r->next=q;
				q=q->next;
				r->next=NULL;
			}
			else
			{
				q->cof+=p->cof;
				q=q->next;
				p=p->next;
				r->next=NULL;
			}
		}
	while(p!=NULL)
	{
		r->next=p;
		p=p->next;
		r=r->next;
	}
	while(q!=NULL)
	{
		r->next=q;
		q=q->next;
		r=r->next;
	}
	}
}
main()
{
	int ch,flag=0,c,cof,pow;
    poly *head1 = NULL;
    poly *head2 = NULL;
    poly *head3 = NULL;
    while(flag==0)
    {
    	printf("\n1.Create a polynomial");
    	printf("\n2.Display a polynomial");
    	printf("\n3.Add two polynomial");
    	printf("\n4.Exit");
    	scanf("%d",&ch);
    	switch(ch)
    	{
    		case 1:
    			c=0;
    			while(c==0)
    			{
    				printf("\nEnter the coefficient");
    				scanf("%d",&cof);
    				printf("Enter the power");
    				scanf("%d",&pow);
    				create(&head1,cof,pow);
    				printf("Continue?Y/N");
    				fflush(stdin);
    				scanf("%c",&ch);
    				if(toupper(ch)=='N')
    					c++;
				}
				break;
			case 2:
				display(head1);
				break;
			case 3:
				printf("Enter the first polynomial");
				c=0;
    			while(c==0)
    			{
    				printf("\nEnter the coefficient");
    				scanf("%d",&cof);
    				printf("Enter the power");
    				scanf("%d",&pow);
    				create(&head1,cof,pow);
    				printf("Continue?Y/N");
    				fflush(stdin);
    				scanf("%c",&ch);
    				if(toupper(ch)=='N')
    					c++;
    			}
    			printf("Enter the second polynomial");
				c=0;
    			while(c==0)
    			{
    				printf("\nEnter the coefficient");
    				scanf("%d",&cof);
    				printf("Enter the power");
    				scanf("%d",&pow);
    				create(&head2,cof,pow);
    				printf("Continue?Y/N");
    				fflush(stdin);
    				scanf("%c",&ch);
    				if(toupper(ch)=='N')
    					c++;
				}
				add(&head3,head1,head2);
				display(head3);
				break;
			case 4:
				flag++;
				break;
		}
	}
}
