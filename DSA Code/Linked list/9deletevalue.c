//To delete a node in between in a linkedlist
#include<stdio.h>

#include<stdlib.h>

//Creating a linked list data type using structure
struct Node
{
    int data;
    struct Node *next;
};
void linkedlisttraversal(struct Node *ptr)
{
    while(ptr!=NULL)
    {
        printf("%d\n",ptr->data);
        ptr=ptr->next;
    }
}
struct Node* deletevalue(struct Node *head,int data)
{
    struct Node *ptr=head;
    struct Node *qtr=ptr->next;
    while(qtr->data!=data && qtr->next!=NULL)  //The data might not be present in the linkedlist thus this && condition
    {
        ptr=ptr->next;
        qtr=qtr->next;
    }
    if(qtr->data!=data)
        exit(printf("The number does not consist in the linkedlist"));
    ptr->next=qtr->next;
    free(qtr);
    return head;
}
int main()
{
    //Initialisng the linked list and at the same time allocating their memory
    struct Node *head=(struct Node*)malloc(sizeof(struct Node));  
    struct Node *second=(struct Node*)malloc(sizeof(struct Node));  
    struct Node *third=(struct Node*)malloc(sizeof(struct Node));  
    struct Node *fourth=(struct Node*)malloc(sizeof(struct Node));  
    struct Node *fifth=(struct Node*)malloc(sizeof(struct Node));  
    //Giving the nodes their values and linking them
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
    linkedlisttraversal(head);
    head=deletevalue(head,1);   
    printf("\n");
    linkedlisttraversal(head);
    return 0;
}