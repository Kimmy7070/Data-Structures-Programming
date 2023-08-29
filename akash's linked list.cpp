#include <stdio.h>
#include <stdlib.h>
typedef struct node
{
    int data;
    struct node *next;
} Node;
void display(Node *head)
{
    Node *r = head;
    while (r != NULL)
    {
        printf("Element: %d\t", r->data);
        r = r->next;
    }
}
void insertAtBeginning(Node **p, int n)
{
    Node *ptr = (Node *)malloc(sizeof(Node));
    ptr->data = n;
    ptr->next = *p;
    *p = ptr;
}
void insertAtEnd(Node **p, int n)
{
    Node *ptr, *r;
    ptr = (Node *)malloc(sizeof(Node));
    ptr->data = n;
    ptr->next = NULL;
    if (*p == NULL)
    {
        *p = ptr;
    }
    else
    {
        r = *p;
        while (r->next != NULL)
        {
            r = r->next;
        }
        r->next = ptr;
    }
}
void deleteFirst(Node **p)
{
    Node *r;
    if (*p == NULL)
    {
        puts("Null list");
    }
    else
    {
        r = *p;
        *p = r->next;
        free(r);
    }
}
int main()
{
    int opt, n, index;
    Node *head = NULL;
    while (1)
    {
        printf("\n1. Insert at the beginning");
        printf("\n2. Insert at the end");
        printf("\n3. Insert after any Index");
        printf("\n4. Delete first node");
        printf("\n5. Display the data");
        printf("\n6. Exit");
        printf("\nEnter Option:");
        scanf("%d", &opt);
        switch (opt)
        {
        case 1:
            printf("\nEnter Data: ");
            scanf("%d", &n);

            insertAtBeginning(&head, n);
            break;
        case 2:
            printf("\nEnter Data: ");
            scanf("%d", &n);
            insertAtEnd(&head, n);
            break;
        case 3:
            printf("\nEnter Data: ");
            scanf("%d", &n);
            printf("\nEnter the index:");
            scanf("%d", &index);
            // insertAtBetween(&head, index, n);
            break;
        case 4:
            deleteFirst(&head);
            break;
        case 5:
            display(head);
            break;
        case 6:
            exit(0);
        default:
            printf("\nInvalid Option!!!");
            break;
        }
    }
    return (0);
}
