//Insert at index in a linkedlist
#include<stdio.h>
 
#include<stdlib.h>
//Creating a node data type for a linked list
struct Node
{
    int data;
    struct Node *next;
};
struct Node* linkedlistindex(struct Node *head,int data,int index)
{
    //Creating /Initialising a new node to put in between
    struct Node *ptr;
    ptr=(struct Node*)malloc(sizeof(struct Node));
    //Naming p also as a head node such that at last while returning head the original head will not be lost
    struct Node *p=head;
    int i=0;  //Here index starts from 1 not 0 if you want 0 set i=0
    while(i!=index-2)
    {
        p=p->next;
        i++;
    }
    ptr->data=data;
    ptr->next=p->next;
    p->next=ptr;
    return head;
}
void linkedlisttraversal(struct Node *ptr)
{
    while(ptr!=NULL)
    {
        printf("%d\n",ptr->data);
        ptr=ptr->next;
    }
}
int main()
{
    //Initialising Nodes
    struct Node *head;
    struct Node *second;
    struct Node *third;
    struct Node *fourth;
    struct Node *fifth;
    //Dynamically allocating memory for the nodes using malloc 
    head=(struct Node*)malloc(sizeof(struct Node));
    second=(struct Node*)malloc(sizeof(struct Node));
    third=(struct Node*)malloc(sizeof(struct Node));
    fourth=(struct Node*)malloc(sizeof(struct Node));
    fifth=(struct Node*)malloc(sizeof(struct Node));
    //Passing values to the nodes
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
    //Traversing a linked list and printing the given values
    linkedlisttraversal(head);  //Passing head as a parameter
    linkedlistindex(head,0,2);
    printf("\n");
    linkedlisttraversal(head);
    return 0;
}