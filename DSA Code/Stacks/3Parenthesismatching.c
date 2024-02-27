//Here I have used linkedlist to implement Stack
#include<stdio.h>

#include<stdlib.h>

struct Node
{
    char data;
    struct Node* next;
};
int isEmpty(struct Node* ptr)
{
    if(ptr==NULL)
        return 1;
    else 
        return 0;
}

struct Node* push(struct Node* top,char data)
{
    struct Node *temp=(struct Node*)malloc(sizeof(struct Node));
    temp->data=data;    
    temp->next=top;
    top=temp;
    return top;
}
void pop(struct Node** top)
{
    *top=(*top)->next;
}
int parenmatching(char *exp)
{
    struct Node *top=NULL;
    for(int i=0;exp[i]!='\0';i++)
    {
        if(exp[i]=='(')
            top=push(top,'(');
        else if(exp[i]==')')
        {
            if(isEmpty(top))
                return 0;
            else 
                pop(&top);
        }
    }
    if(isEmpty(top))
        return 1;
    else 
        return 0;
}
int main()
{
    // char *exp="(3*2+(5-3))";
    char *exp="((8)(*--$$9))))))";
    if(parenmatching(exp))
    {
        printf("The expression is balanced\n");
    }
    else
    {
        printf("The expression is unbalanced\n");
    }
    return 0;
}