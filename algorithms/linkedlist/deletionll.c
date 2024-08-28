
#include<stdio.h>
#include<stdlib.h>

typedef struct Node
{
    int data;
    struct node * next;

}node;


node*delete_first(node*head)
{
    node*ptr=head;
    head=head->next;
    free(ptr);

    return head;
}

node*delete_last(node*head)
{
   node*p=head;
   node*q=head->next;

   while(q->next!=NULL)
   {
    p=p->next;
    q=q->next;
   }
   p->next=q->next;
   free(q);


    return head;
}

node*delete_index(node*head,int index)
{
   node*p=head;
   node*q=head->next;

   for(int i=0;i<index-1;i++)
   {
    p=p->next;
    q=q->next;
   }

   p->next=q->next;
   free(q);
   return head;
}
node*delete_value(node*head,int value)
{
   node*p=head;
   node*q
=head->next;
   while(q->data!=value && q->next!=NULL)
   {
    p=p->next;
    q=q->next;
   }
   if(q->data==value)
   {
    p->next=q->next;
    free(q);
   }
   return head;
}




void display_LL(node*head)
{
    while(head!=NULL)
    {
        printf("Elements:%d\n",head->data);
        head=head->next;

    }
}

int main()
{
    node*head=(node*)malloc(sizeof(node));
    node*second=(node*)malloc(sizeof(node));
    node*third=(node*)malloc(sizeof(node));
    node*fourth=(node*)malloc(sizeof(node));

    head->data=1;
    head->next=second;

    second->data=2;
    second->next=third;

    third->data=3;
    third->next= fourth;

    fourth->data=4;
    fourth->next= NULL;

printf("LL before deletion:\n");
display_LL(head);

head= delete_value(head,2);
// head= delete_index(head,2);
// head= delete_last(head);
// head= delete_first(head);
printf("\nLL after deletion:\n");
display_LL(head);

return 0;





}