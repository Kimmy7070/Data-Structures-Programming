#includes<stdio.h>
#includes<stdlib.h>
typedef struct queue
{
	int front,rear;
	int arr[50];
}queue;
int isEmpty(queue q)
{
	if(q.front==-1&&q.rear==-1)
		return 1;
	else
		return 0;
}
int isFull(queue q)
{
	if(q.front==0&&q.rear==49)
		return 1;
	else
		return 0;
}
main()
{
	
}
