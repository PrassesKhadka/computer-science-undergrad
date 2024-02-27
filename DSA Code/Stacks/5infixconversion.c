//Infix to Postfix Conversion
#include<stdio.h>
#include<string.h>
#include<stdlib.h>
struct Stack 
{
    int size;
    int top;
    char *arr;
};
int isoperator (char infix)
{
    if(infix=='*'||infix=='+'||infix=='-'||infix=='/')
        return 1;
    else    
        return 0;
}
char stacktop(struct Stack *sp)
{
    return sp->arr[sp->top];
}
int isEmpty(struct Stack *sp)
{
    if(sp->arr[sp->top]==-1)
        return 1;
    else
        return 0;
}
int precedence(char data)
{
    if(data=='/' ||data=='*')
        return 3;
    else if(data=='+' ||data=='-')
        return 2;
    else 
        return 0;
}
void push(struct Stack *sp,char infixdata)
{
    sp->arr[++sp->top]=infixdata;
}
char pop(struct Stack *sp)
{
    return sp->arr[sp->top--];
}

char* conversion(char *infix)
{
    int i=0,j=0;
    char *postfix=(char*)malloc((strlen(infix)+1)*sizeof(char));
    struct Stack *sp=(struct Stack*)malloc(sizeof(struct Stack));
    sp->size=100;
    sp->top=-1;
    sp->arr=(char*)malloc(sp->size*sizeof(char));
    while(infix[i]!='\0')
    {
        if(!isoperator(infix[i]))
        {
            postfix[j]=infix[i];
            i++;
            j++;
        }
        else
        {
            if((precedence(infix[i])) > precedence(stacktop(sp)))
            {
                push(sp,infix[i]);
                i++;
            }
            else 
            {
                postfix[j]=pop(sp);
                j++;
            }
        }
    }
    while(!isEmpty(sp))
    {
        postfix[j++]=pop(sp);
    }
    postfix[j]='\0';
    return postfix;
}
int main()
{   
    char *infix="a+b-c/10";
    char *post=conversion(infix);
    printf("%s",post);
    return 0;
}
