#include<stdio.h>

#include<stdlib.h>

int f(int a,int b)
{
    int power;
    if(b==1)
        return a;
    return a*f(a,b-1);    
}
int main()
{
    int a,b;
    printf("Enter the index:\n");
    scanf("%d",&a);
    printf("Enter the power:\n");
    scanf("%d",&b);
    printf("The answer is %d:",f(a,b));
    return 0;
}