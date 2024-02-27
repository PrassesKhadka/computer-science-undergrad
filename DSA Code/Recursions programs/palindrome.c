#include<stdio.h>

#include<stdlib.h>

int f(int n,int sum) //or rather than passing sum you can initialise static int sum 
{
    if(n==0)    
        return sum;
    sum=sum*10+(n%10);
    f(n/10,sum);
}
int main()
{
    int n,sum=0,result;
    printf("Enter a number:\n");
    scanf("%d",&n);
    result=f(n,sum);
    if(result==n)
        printf("The number is a palindrome number\n");
    else
        printf("The number is not a palindrome number\n");   
    return 0;
}
