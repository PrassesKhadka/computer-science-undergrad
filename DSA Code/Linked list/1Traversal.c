//To traverse a linked list 
#include<stdio.h>

#include<stdlib.h>

//Creating a linked list Node data type
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
int main()
{
    struct Node* head;  //Initialising a node
    struct Node* second; //Initialising second node and so on
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
    return 0;
}