//Linked list implementation of Queue
#include<stdio.h>

#include<stdlib.h>

struct Node
{
    int data;
    struct Node *next;
};
struct Node *f=NULL;
struct Node *r=NULL;

void linkedlisttraversal()
{
    printf("Queue is:\t");
    struct Node *ptr=f;
    while(ptr!=NULL)
    {
        printf("%d\t",ptr->data);
        ptr=ptr->next;
    }
    printf("\n");
}
int isEmpty()
{
    if(f==NULL)
    {
        return 1;
    }
    else
    {
        return 0;
    } 
}
int isFull(struct Node *n)
{
    if(n==NULL)
        return 1;
    else
        return 0;
}
void enqueue(int data)
{
    struct Node *newnode=(struct Node*)malloc(sizeof(struct Node));
    if(isFull(newnode))
    {
        printf("The queue is full\n");
        exit(1);
    }
    else
    {
        newnode->data=data;
        newnode->next=NULL;
        if(isEmpty())
        {
            f=r=newnode;
        }  
        else 
        {
            r->next=newnode;
            r=newnode;
        }
    }
}
void dequeue()
{
    if(isEmpty())
    {
        printf("The queue is empty\n");
    }
    else
    {
        struct Node *ptr=f;
        f=f->next;
        printf("%d is dequeued\n",ptr->data);
        free(ptr);
    }
}


int main()
{
    linkedlisttraversal();
    enqueue(1);
    enqueue(2);
    enqueue(3);
    enqueue(4);
    enqueue(5);
    linkedlisttraversal();
    dequeue();
    dequeue();
    linkedlisttraversal();
    return 0;
}
