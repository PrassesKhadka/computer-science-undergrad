//Sum of digits using recursion
#include<stdio.h>

#include<stdlib.h>

int main()
{
    int n;
    printf("Enter a number:\n");
    scanf("%d",&n);
    printf("The sum of it's digits %d\n",f(n));
    return 0;
}
int f(int n)
{
    int sum=0;
    if(n<10)
        return n;
    sum=f(n/10)+f(n%10);
    return sum;
}