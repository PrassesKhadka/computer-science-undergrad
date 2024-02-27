//Linkedlist All insertion program
#include<stdio.h>

#include<stdlib.h>

struct node
{
    int data;
    struct node* next;
};
void traversal(struct node*head)
{
    while(head!=NULL)
    {
        printf("%d\t",head->data);
        head=head->next;
    }
}
struct node* insertionatbeginning(struct node*head,int data)
{
    struct node*ptr=head;
    struct node*ptr1=malloc(sizeof(struct node));
    ptr1->data=data;
    ptr1->next=ptr;
    return ptr1;
}
void insertioninbetween(struct node*head,int data,int index)
{
    struct node*ptr=malloc(sizeof(struct node));
    struct node*ptr1=malloc(sizeof(struct node));
    ptr=head;
    ptr1->data=data;
    int i=0;
    while(i!=index-2)
    {
        ptr=ptr->next;
        i++;
    }
    ptr1->next=ptr->next;
    ptr->next=ptr1;
}
void insertionatend(struct node*head,int data)
{
    struct node*ptr1=malloc(sizeof(struct node));
    struct node*ptr=head;
    ptr1->data=data;
    while(ptr->next!=NULL)
    {
        ptr=ptr->next;
    }
    ptr->next=ptr1;
    ptr1->next=NULL;
}
void insertionafternode(struct node*head,int data,int index)
{
    struct node*ptr=head;
    struct node*ptr1=malloc(sizeof(struct node));
    int i;
    for(i=0;i<index-1;i++)
    {
        ptr=ptr->next;
    }
    ptr1->data=data;
    ptr1->next=ptr->next;
    ptr->next=ptr1;
}
int main()
{
    struct node* head=malloc(sizeof(struct node));
    struct node* second=malloc(sizeof(struct node));
    struct node* third=malloc(sizeof(struct node));
    struct node* fourth=malloc(sizeof(struct node));
    struct node* fifth=malloc(sizeof(struct node));
    head->data=1;
    head->next=second;
    second->data=2;
    second->next=third;
    third->data=3;
    third->next=fourth;
    fourth->data=4;
    fourth->next=fifth;
    fifth->data=5;
    fifth->next=NULL;
    traversal(head);
    head=insertionatbeginning(head,1000);
    insertioninbetween(head,10000,3);
    insertionatend(head,1000);
    insertionafternode(head,10000,3);
    printf("\n");
    traversal(head);
    return 0;
}