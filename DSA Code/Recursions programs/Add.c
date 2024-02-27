//To add two numbers using the concept of recursions
#include<stdio.h>

#include<stdlib.h>

int f(int a,int b)
{
    int add;
    if(b==0)   //Base condition
        return a;
    add=f(a,b-1)+1;
    return add;
}

int main()
{
    int a,b,add;
    printf("Enter two numbers:\n");
    scanf("%d %d",&a,&b);
    add=f(a,b);
    printf("Their sum is: %d\n",add);
    return 0;
}