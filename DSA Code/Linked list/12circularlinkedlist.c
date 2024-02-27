//Circular Linked list 
#include<stdio.h>

#include<stdlib.h>

struct node
{
    int data;
    struct node*next;
};
void traversal(struct node* head)
{
    struct node* ptr=head;
    do
    {
        printf("%d\t",ptr->data);
        ptr=ptr->next;
    }while(ptr!=head);
}
struct node* insertatfirst(struct node* head,int data)
{
    struct node*ptr1=malloc(sizeof(struct node));
    struct node*ptr=head;
    ptr1->data=data;
    ptr1->next=ptr;
    while(ptr->next!=head)
    {
        ptr=ptr->next;
    }
    ptr->next=ptr1;
    return ptr1;
}
int main()
{
    struct node* head=malloc(sizeof(struct node));
    struct node* second=malloc(sizeof(struct node));
    struct node* third=malloc(sizeof(struct node));
    struct node* fourth=malloc(sizeof(struct node));
    head->data=1;
    head->next=second;
    second->data=2;
    second->next=third;
    third->data=3;
    third->next=fourth;
    fourth->data=4;
    fourth->next=head;
    traversal(head);
    head=insertatfirst(head,10000);
    head=insertatfirst(head,1000);
    head=insertatfirst(head,100);
    printf("\n");
    traversal(head);
    return 0;
}