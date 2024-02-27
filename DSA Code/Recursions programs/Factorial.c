//Finding the factorial of a number using the concept of recursion
#include<stdio.h>

#include<stdlib.h>

int main()
{
    int n;
    printf("Enter a number:\n");
    scanf("%d",&n);
    printf("The factorial is: %d \n",f(n));
    return 0;
}
int f(int n)
{
    int factorial;
    if(n==0)
        return 1;
    factorial=n*f(n-1);
    return factorial;
}