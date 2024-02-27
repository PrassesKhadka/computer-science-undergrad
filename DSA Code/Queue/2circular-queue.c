//Circular Queue implementation using array 
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
    if((q->r+1) % (q->size)==q->f)
    {
        return 1;
    }
    else
    {
        return 0;
    } 
}
void enqueue(struct Queue *q,int data)
{
    if(isFull(q))
    {
        printf("Queue is Full\n");
    }
    else
    {
        q->r=(++q->r)%(q->size);
        q->arr[(q->r)]=data;
        printf("%d is enqueued\n",data);
    }
}
void dequeue(struct Queue *q)
{
    if(isEmpty(q))
    {
        printf("Queue is Empty\n");
    }
    else
    {
        q->f=(++q->f) % (q->size);
        printf("Dequeued:\t");
        printf("%d\t",q->arr[q->f]);
        printf("\n");
    }
}
int main()
{
    struct Queue *q=(struct Queue*)malloc(sizeof(struct Queue));
    q->size=5;
    q->f=q->r=0;
    q->arr=(int*)malloc(q->size*sizeof(int));  
    enqueue(q,1);
    enqueue(q,2);
    enqueue(q,3);
    enqueue(q,4);
    enqueue(q,5);
    dequeue(q);
    enqueue(q,6);
    return 0;
}



 
 

 
 
 

