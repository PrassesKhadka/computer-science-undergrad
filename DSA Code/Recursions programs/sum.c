//Program to find the sum of first N numbers
#include<stdio.h>

#include<stdlib.h>
int sum(int);
int main()
{
    int n;
    printf("Enter till which number you want to print the sum:\n");
    scanf("%d",&n);
    printf("The sum is %d\n",sum(n));
    return 0;
}
int sum(int n)
{
    int result=0;
    if(n==1)
        return 1;
    result=n+sum(n-1);
    return result;
}