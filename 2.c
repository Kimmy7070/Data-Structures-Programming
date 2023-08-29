#include<stdio.h>
#include<conio.h>
#include<stdlib.h>
typedef struct Stack
{
	int row;
	int column;
	int data;
	struct Stack *next;
}Stack;

void insertDatainArray(int arr[3][3])
{
	int i,j;
	printf("Enter element of the 3X3 matrix:");
	for(i=0;i<3;i++)
	{
		for(j=0;j<3;j++)
		{
			scanf("%d",&arr[i][j]);
		}
	}
}

void push(Stack **top,int arr[3][3])
{
	int i,j;
	Stack *newNode;
	insertDatainArray(arr);
	for(i=0;i<3;i++)
	{
		for(j=0;j<3;j++)
		{
			Stack *newNode=(Stack *)malloc(sizeof(Stack));
			newNode->row=i;
			newNode->column=j;
			newNode->data=arr[i][j];
		    newNode->next=*top;
		    *top=newNode;
			}
		}
	}
