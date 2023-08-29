#include <stdio.h>
#include <stdlib.h>
typedef struct node
{
	int data;
	struct node *next;
	struct node *prev;
}node;
typedef struct header
{
	struct node *head;
	struct node *tail;
	int max;
	int c;
}header;
main()
{
	int ch,posflag=0;
	header *head=NULL;
	while(flag==0)
	{
		printf("What do you want to do?");
		printf("\n1.Create node at pos");
		printf("\n2.Delete node at pos");
		printf("\n3.")
		scanf("%d",&ch);
		switch(ch)
		{
			case(1):
				
		}
	
}
