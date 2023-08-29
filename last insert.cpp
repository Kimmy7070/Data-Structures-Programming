void lastinsert(int item){

   struct node*ptr,*temp;
   ptr=(struct node*) malloc (sizeof (struct node));
   if(ptr==NULL){
    printf ("empty");
}
else
{
   ptr->data=item;
   if(head==NULL)
   {
   head=ptr;
   ptr->next=head;
}
}
else{
  temp=head;
  while (temp->next!=head){
      temp=temp->next;
}
temp->next=ptr;
ptr->next=head;

}
}
