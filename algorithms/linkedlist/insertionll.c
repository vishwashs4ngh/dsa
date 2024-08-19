#include<stdio.h>
#include<stdlib.h>

typedef struct node{
    int data;
    struct node * next;

}Node;


void linkedlist_traversal(Node * ptr)
{
    while(ptr!=NULL)
    {
        printf("Element : %d\n",ptr->data);
        ptr=ptr->next;
    }
}

Node * insert_beg(Node * head, int data)
{
    Node * ptr=(Node*)malloc(sizeof(Node));
    
    ptr->next=head;
    ptr->data=data;
    return ptr;

}


Node * insert_index(Node * head, int data, int index)
{
    Node * ptr=(Node*)malloc(sizeof(Node));
    ptr->data=data;
    ptr->next=head;

    Node * p = head;
    int i=0;
    while(i!=index-1)
    {
        p=p->next;
        i++;
    }
    ptr->next=p->next;
    p->next=ptr;
    return head;

}

Node * insert_end(Node * head, int data)
{
    Node * ptr=(Node*)malloc(sizeof(Node));
    ptr->data=data;
    Node * p= head;
    while(p->next!=NULL)
    {
        p=p->next;
    }
    p->next=ptr;
    ptr->next=NULL;
    return head;

}

Node * insert_after(Node * head,Node * prevnode, int data)
{
    Node * ptr=(Node*)malloc(sizeof(Node));
    ptr->data=data;

    ptr->next=prevnode->next;
    prevnode->next=ptr;
    return head;
    
    

}



int main()
{
  Node * head;
  Node * second;
  Node * third;
  Node * fourth;
  Node * fifth;
  Node * sixth;


head= (Node *)malloc(sizeof(Node));
second= (Node *)malloc(sizeof(Node));
third= (Node *)malloc(sizeof(Node));
fourth= (Node *)malloc(sizeof(Node));
fifth= (Node *)malloc(sizeof(Node));
sixth= (Node *)malloc(sizeof(Node));

head->data=7;
head->next=second;

second->data=9;
second->next=third;

third->data=11;
third->next=fourth;

fourth->data=13;
fourth->next=fifth;

fifth->data=15;
fifth->next=sixth;

sixth->data=17;
sixth->next=NULL;

printf("Linked list before insertion:\n");
linkedlist_traversal(head);
// head=insert_index(head, 8, 2);
// head=insert_beg(head, 19);
// head=insert_end(head, 21);
head=insert_after(head,third, 12);
printf("\nLinked List after insertion:\n");
linkedlist_traversal(head);

return 0;

}