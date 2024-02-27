//sum of digits without using recursion
#include<stdio.h>

#include<stdlib.h>

int main()
{
    int n,sum=0;
    printf("Enter a number:\n");
    scanf("%d",&n);
    while(1)
    {
        sum=sum+(n%10);
        n=n/10;
        if(n==0)
            break;
    }   
    printf("Sum=%d\n",sum);
    return 0;
}