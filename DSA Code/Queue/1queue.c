//Queue Operation using Arrays
#include<stdio.h>

#include<stdlib.h>
struct Queue
{
    int size;
    int f;
    int r;
    int *arr;
};
int isEmpty(struct Queue *q)
{
    if(q->f==q->r)
        return 1;
    else
        return 0;
}
int isFull(struct Queue *q)
{
    if(q->r==(q->size)-1)
        return 1;
    else
        return 0;
}
void traversal(struct Queue *q)
{
    int a=q->f;
    int b=q->r;
    if(isEmpty(q))
    {
        printf("The Queue is empty\n");
        exit(1);
    }
    else if(isFull(q))
    {
        printf("The queue is full\n");
    }
    printf("Queue:\t");
    while(a!=b)
    {
        printf("%d\t",q->arr[++a]);
    }
    printf("\n");
}
void enqueue(struct Queue *q,int data)
{
    if(isFull(q))
    {
        printf("The Queue is Full\n");
        exit(1);
    }
    q->arr[++q->r]=data;
}
void dequeue(struct Queue *q)
{
    if(isEmpty(q))
    {
        printf("The Queue is Empty\n");
        exit(1);
    }
    printf("Dequeued value is %d\n",q->arr[++q->f]);
}
void peek(struct Queue *q,int index)
{
    int a=q->f;
    int b=q->r;
    printf("Value at index %d is %d\n",index,q->arr[a+index]);
}
int main()
{
    struct Queue *q=(struct Queue*)malloc(sizeof(struct Queue));
    q->size=20;
    q->f=q->r=-1;
    q->arr=(int*)malloc((q->size)*sizeof(int));
    enqueue(q,1);
    enqueue(q,2);
    enqueue(q,3);
    enqueue(q,4);
    enqueue(q,5);
    traversal(q);
    dequeue(q);
    traversal(q);
    peek(q,3);
    return 0;
}