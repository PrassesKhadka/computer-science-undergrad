//To delete a node in between or at a certain index in a linkedlist
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
void deleteinbetween(struct Node *head,int index)
{
    int i=0;
    struct Node *ptr=head;
    while(i!=(index-1) && ptr->next!=NULL)  //This && condition to avoid entering of index beyond the linkedlist max index
    {
        ptr=ptr->next;
        i++;
    }
    if(i!=index-1)
        exit(printf("The given index exceeds the maximum index of the linkedlist"));
    struct Node *qtr=ptr->next;
    ptr->next=qtr->next;
    free(qtr);
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
    deleteinbetween(head,8);   //index will start from 0
    printf("\n");
    linkedlisttraversal(head);
    return 0;
}