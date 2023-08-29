#include <stdio.h>
#include <stdlib.h>
#define size 15
struct stack
{
    int size;
    int top;
    int *arr;
};
int isEmpty(struct stack *ptr)
{
	printf("is empty");
    if (ptr->top == -1)
    {
        return 1;
    }
    else
    {
        return 0;
    }
}

int isFull(struct stack *ptr)
{
	printf("isFULL");
    if (ptr->top == ptr->size - 1)
    {
        return 1;
    }
    else
    {
        return 0;
    }
}
main()
{
    struct stack *s;
    s->size = 60;
    s->top = -1;
	printf("Main");
    s->arr[0] = 7;
    s->top++;
    int n=isEmpty(s);
    if (n==1)
    {
        printf("THE STACK IS EMPTY.");
    }
    else
    {
        printf("THE STACK IS not EMPTY.");
    }
}
