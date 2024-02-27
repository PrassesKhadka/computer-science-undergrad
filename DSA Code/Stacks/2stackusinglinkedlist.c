//Stack implementation using Linked List
#include<stdio.h>

#include<stdlib.h>

struct Node
{
    int data;
    struct Node *next;
};
void linkedlisttraversal(struct Node*ptr)
{
    if(isEmpty(ptr))
        printf("The stack is empty\n");
    else
    {
        printf("Linkedlist Traversal\n");
        while(ptr!=NULL)
        {
            printf("%d\t",ptr->data);
            ptr=ptr->next;
        }
        printf("\n");
    }
}
int isEmpty(struct Node *top)
{
    if(top==NULL)
        return 1;
    else
        return 0;
}
struct Node* push(struct Node *top,int data)
{
    struct Node* temp=(struct Node*)malloc(sizeof(struct Node));
    temp->data=data;
    temp->next=top;
    top=temp;
    return top;
}
int pop(struct Node**top)
{
    if(isEmpty(*top))
    {
        printf("The stack is empty\n");
        exit(1);
    }
    else
    {
        struct Node *n=*top;
        *top=(*top)->next;
        int x=n->data;
        free(n);
        return x;
    }
}
void peek(struct Node *top,int index)
{
    int i=0;
    while(i!=index-1)
    {
        top=top->next;
        i++;
    }
    printf("The data at %d is %d\n",index,top->data);
}
int main()
{
    int data;
    struct Node *top=NULL;
    top=push(top,5);    
    top=push(top,4);    
    top=push(top,3);    
    top=push(top,2);    
    top=push(top,1);    
    linkedlisttraversal(top);
    peek(top,2);
    data=pop(&top);
    printf("Popped data is:%d\n",data);
    data=pop(&top);
    printf("Popped data is:%d\n",data);
    data=pop(&top);
    printf("Popped data is:%d\n",data);
    data=pop(&top);
    printf("Popped data is:%d\n",data);
    data=pop(&top);
    printf("Popped data is:%d\n",data);
    data=pop(&top);
    printf("Popped data is:%d\n",data);
    return 0;
}