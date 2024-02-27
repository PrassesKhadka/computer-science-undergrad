//To insert at the beginning of a linked list 
#include<stdio.h>

#include<stdlib.h>

//Creating a linked list Node
struct Node
{
    int data;
    struct Node* next;
}; 

void linkedlisttraversal(struct Node *ptr)
{
    while(ptr!=NULL)
    {
        printf("Element=%d\n",ptr->data);
        ptr=ptr->next;
    }
}
struct Node* insertion(struct Node *head,int data)
{
    struct Node *ptr;   //Initialising a Node i.e a new node 
    ptr=(struct Node*)malloc(sizeof(struct Node));  //Dynamically allocating memory for this new node which is to be inserted
    ptr->data=data;
    ptr->next=head;
    return ptr;
}
int main()
{
    struct Node* head;
    struct Node* second;
    struct Node* third;
    struct Node* fourth;
    //MEMORY ALLOCATION
    head=(struct Node*)malloc(sizeof(struct Node));
    second=(struct Node*)malloc(sizeof(struct Node));
    third=(struct Node*)malloc(sizeof(struct Node));
    fourth=(struct Node*)malloc(sizeof(struct Node));
    //Giving data to the Nodes
    (head->data)=23;
    head->next=second;
    second->data=43;
    second->next=third;
    third->data=33;
    third->next=fourth;
    fourth->data=55;
    fourth->next=NULL;
    //Calling function by passing head as parameter
    linkedlisttraversal(head);
    printf("\n");
    printf("Linked list after insertion:\n");
    head=insertion(head,181);
    linkedlisttraversal(head);
    return 0;
}

