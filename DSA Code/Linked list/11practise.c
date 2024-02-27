//All Deletion in linkedlist
#include<stdio.h>
#include<stdlib.h>
struct node
{
    int data;
    struct node* next;
};
void traversal(struct node*ptr)
{
    while(ptr!=NULL)
    {
        printf("%d\t",ptr->data);
        ptr=ptr->next;
    }
}
struct node* deletionfirstnode(struct node*ptr)
{
    struct node*head=ptr;
    head=ptr->next;
    free(ptr);
    return head;    
}
void deletioninbetween(struct node*head,int index)
{
    struct node*ptr=head;
    int i=0;
    for(i;i<(index-2);i++)
    {
        ptr=ptr->next;
    }
    struct node*qtr=ptr->next;
    ptr->next=qtr->next;
    free(qtr);
}
void deletionatend(struct node*head)
{
    struct node*ptr=head;
    struct node*qtr=ptr->next;
    while(qtr->next!=NULL )
    {
        ptr=ptr->next;
        qtr=qtr->next;
    }
    ptr->next=NULL;
    free(qtr);
}
void deletionafter(struct node*head,int index)
{
    struct node*ptr=head;
    struct node*qtr;
    int i=0;
    for(i;i<(index-1);i++)
    {
        ptr=ptr->next;
    }
    qtr=ptr->next;
    ptr->next=qtr->next;
    free(qtr);
}

int main()
{
    struct node*head=malloc(sizeof(struct node));
    struct node*second=malloc(sizeof(struct node));
    struct node*third=malloc(sizeof(struct node));
    struct node*fourth=malloc(sizeof(struct node));
    struct node*fifth=malloc(sizeof(struct node));
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
    head=deletionfirstnode(head);
    //deletioninbetween(head,3);
    //deletionatend(head);
    //deletionafter(head,3);
    printf("\n");
    traversal(head);

    
    return 0;
}