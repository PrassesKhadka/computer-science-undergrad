#include<stdio.h>

#include<stdlib.h>
struct node
{
    struct node*prev;
    int data;
    struct node*next;
};
void traversal(struct node*head)
{
    struct node*ptr=head;
    while(ptr!=NULL)    
    {
        printf("%d\t",ptr->data);
        ptr=ptr->next;
    }
}
void reverse(struct node*head)
{
    struct node*ptr=head;
    while(ptr->next!=NULL)
    {
        ptr=ptr->next;
    }
    while(ptr!=NULL)
    {

        printf("%d\t",ptr->data);
        ptr=ptr->prev;
    }
   
    ptr->next=NULL;



}
int main()
{
    struct node* head=malloc(sizeof(struct node));  
    struct node* second=malloc(sizeof(struct node));  
    struct node* third=malloc(sizeof(struct node));  
    struct node* fourth=malloc(sizeof(struct node));  
    head->prev=NULL;
    head->data=1;
    head->next=second;
    second->prev=head;
    second->data=2;
    second->next=third;
    third->prev=second;
    third->data=3;
    third->next=fourth;
    fourth->prev=third;
    fourth->data=4;
    fourth->next=NULL;
    traversal(head);
    printf("\n");
    reverse(head);
    return 0;
}