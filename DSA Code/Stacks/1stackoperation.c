//Stack operation using Array
//Operations include:push,pop,peek and isFull,isEmpty
#include<stdio.h>

#include<stdlib.h>

struct Stack
{
    int size;
    int top;
    int *arr;
};

int isFull(struct Stack*ptr)
{
    if(ptr->top==ptr->size-1)
        return 1;
    else
        return 0;
}
int isEmpty(struct Stack *ptr)
{
    if(ptr->top==-1)
        return 1;
    else    
        return 0;
}
void push(struct Stack *ptr,int value)
{
    if(isFull(ptr))
        printf("The stack is Full.Cannot add more value into the stack\n");
    else
    {
        ptr->arr[++ptr->top]=value;
        printf("%d is pushed inside the stack\n",value);
    }
}
void pop(struct Stack *ptr)
{
    if(isEmpty(ptr))
        printf("The Stack is Empty\n");
    else
    {
        printf("Popped=%d\n",ptr->arr[ptr->top--]);
    }
}
void peek(struct Stack *ptr,int index)
{
    printf("The value at index %d is= %d\n",index,ptr->arr[ptr->top-(index-1)]);
}

int main()
{
    struct Stack *sp=(struct Stack*)malloc(sizeof(struct Stack));
    sp->size=5;
    sp->top=-1;
    sp->arr=(int*)malloc(sp->size*sizeof(int)); 
    pop(sp);
    push(sp,0);
    push(sp,1);
    push(sp,2);
    push(sp,3);
    push(sp,4);
    push(sp,4);
    peek(sp,3);
    pop(sp);
    pop(sp);
    pop(sp);
    pop(sp);
    pop(sp);
    pop(sp);
}