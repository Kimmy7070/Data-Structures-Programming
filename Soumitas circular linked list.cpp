#include <stdio.h>
#include <stdlib.h>
struct node
{
    int data;
    struct node *next;
    }*tail;
void create()
{
    struct node *newnode, *temp;
    newnode=(struct node*)malloc(sizeof(struct node));
    printf ("enter the data");
    scanf ("%d",&newnode->data);
    newnode->next=NULL;
    if(tail==NULL)
{
    tail=temp=newnode;
}
    else
{
    temp->next=newnode;
    temp=newnode;
}
    temp->next=tail;
}

int getlength(node *temp)
{
   int l=0;
   if(temp==NULL){
       return 1;
       }
   else
   {
   l=l+1;
   getlength(temp->next);
   }
}
void insertatend()
{ 
struct node*newnode;
int data;
newnode=(struct node*) malloc (sizeof(struct node));
printf ("enter data");
scanf("%d",& newnode->data);
newnode->next=NULL;
if(tail==NULL)
{
   tail=newnode;
   tail->next=newnode;
}
else
{
newnode->next=tail->next;
tail->next=newnode;
tail=newnode;
}
}
void insertat_nth(int num, int pos)
{
  struct node*newnode,*temp;
  int i;
  if(tail==NULL)
  {
  printf ("invalid position");
}
else if(pos==1)
{ 
	printf("Not done yet");
}
else
{
newnode= (struct node*)malloc(sizeof(struct node));
newnode->data=num;
temp=tail;
for(i=2;i<=pos-1;i++)
{
temp=temp->next;
}
newnode->next=temp->next;
temp->next=newnode;
}
}
void deletefirst()
{
struct node *temp;
temp=tail->next;
if(tail==NULL){
  printf ("list is empty");
}
else if(temp->next==temp)
{
tail=NULL;
free(temp);
}
else{
 tail->next=temp->next;
 free(temp);
}
}

void delete_nth(){
   struct node* current,*nextnode;
   int pos, i=1,l;
   current=tail->next;
   printf("enter position");
   scanf("%d",&pos);
   l=getlength (*node);
   if(pos<1 || pos>l){
       printf ("invalid position");
}
else if(pos==1){
  deletefirst ();
}
else{
   while(i<pos-1)
   {
   current=current->next;
   i++;
}
nextnode=current->next;
current->next=nextnode->next;
free(nextnode);
}
}

void display (){
     struct node*temp;
     if(tail==NULL){
     printf ("list empty");
}
else{
   temp=tail;
   while(temp->next!=tail)
   { 
   printf ("%d",temp->data);
   temp=temp->next;
   }
   printf ("%d",temp->data);
}
}
main()
{
	create();
	display();
}
