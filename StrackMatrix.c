#include<stdio.h>
#include<stdlib.h>
type1
1def struct stack{
	int row;
	int cl;
	int data;
	struct stack *next;
}stack;
void push(stack **top,int i,int j,int n)
{
	stack *a,*ptr;
	a=*top;
	ptr=(stack*)malloc(sizeof(stack));
	ptr->data=n;
	ptr->row=i+1;
	ptr->cl=j+1;
	ptr->next=NULL;
	if (*top==NULL)
		*top=ptr;
	else
	{
		ptr->next=*top;
		*top=ptr;
	}
}
void display(stack *a)
{
	while(a!=NULL)
	{
		printf("\nElement at row %d coloumn %d is=%d",a->row,a->cl,a->data);
		a=a->next;
	}
}
main()
{	
	stack *top=NULL;
	int arr[3][3];
	int i,j;
	for(i=0;i<=2;i++)
	{
		for(j=0;j<=2;j++)
		{
			printf("Enter data at row %d coloumn %d position=",i+1,j+1);
			scanf("%d",&arr[i][j]);	
		}
	}
	printf("The matrix is \n");
	for(i=0;i<=2;i++)
	{
		for(j=0;j<=2;j++)
		{
			printf("%d ",arr[i][j]);	
		}
		printf("\n");
	}
	for(i=0;i<=2;i++)
	{
		for(j=0;j<=2;j++)
		{
			push(&top,i,j,arr[i][j]);
		}
	}
	printf("\nDisplay stack");
	display(top);
}
