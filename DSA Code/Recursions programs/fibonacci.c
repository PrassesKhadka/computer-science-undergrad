#include<stdio.h>

#include<stdlib.h>

int f(int);
int main()
{
    int n,m=0;
    printf("Till which number you want to print the fibonacci series:\n");
    scanf("%d",&n);
    printf("The fibonacci series is\n");
    for(int i=0;i<n;i++)
    {
        printf("%d\n",f(m));
        m++;
    }
    return 0;
}

int f(int m)
{
    if(m<=1)
        return m;
    else
        return f(m-1)+f(m-2);
}