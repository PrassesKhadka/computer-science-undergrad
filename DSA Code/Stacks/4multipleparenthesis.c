//Multiple Parenthesis Matching Using Stack 
#include<stdio.h>

#include<stdlib.h>
struct Stack
{
    int size;
    int top;
    char *arr;
};
int isEmpty(struct Stack *sp)
{
    if(sp->top==-1)
        return 1;
    else 
        return 0;
}
int isMatch(char exp,char poppedchar)
{
    if(exp==')' && poppedchar=='(')
        return 1;
    else if(exp==']' && poppedchar=='[')
        return 1;
    else if(exp=='}' && poppedchar=='{')
        return 1;
    else 
        return 0;
}
void push(struct Stack *sp,char x)
{
    sp->arr[++sp->top]=x;    
}
char pop(struct Stack *sp)
{
    return sp->arr[sp->top--];
}
int parenmatch(char*exp)
{
    struct Stack *sp=(struct Stack*)malloc(sizeof(struct Stack));
    sp->size=20;
    sp->top=-1;
    sp->arr=(char*)malloc(sp->size*sizeof(char));
    char poppedchar;
    for(int i=0;exp[i]!='\0';i++)
    {
        if(exp[i]=='('||exp[i]=='['||exp[i]=='{')
        {
            push(sp,exp[i]);
        }
        else if(exp[i]==')'||exp[i]==']'||exp[i]=='}')
        {
            if(isEmpty(sp))          //CONDITION 1
                return 0;
            else
            {
                poppedchar=pop(sp);
                if(!isMatch(exp[i],poppedchar))   //CONDITION 3
                {
                    return 0;
                }
            }
        }
    }
    if(isEmpty(sp))        //CONDITION 2
        return 1; 
    else 
        return 0;
}
int main()
{
    char *exp="[5*{2+(3-5)}](((}}}";
    if(parenmatch(exp))
    {
        printf("The expression is balanced\n");
    }
    else
    {
        printf("The expression is not balanced\n");
    }
    return 0;
}