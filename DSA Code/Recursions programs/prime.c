//To check whether a number is prime or composite using recursion
#include<stdio.h>

#include<stdlib.h>

int f(int n,int i)
{
    if(i==n || n==1)
        return 1;
    if(n%i==0)
        return 0;
    f(n,i+1);
}
int main()
{
    int n,a,i=2;
    printf("Enter a number:\n");
    scanf("%d",&n);
    a=f(n,i);
    if(a==1)
        printf("Prime\n");
    else
        printf("Composite\n");
    return 0;
}