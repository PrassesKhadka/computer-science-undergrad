#include<stdio.h>

#include<stdlib.h>
int f(int n,int i,int array[],int max)
{
    if(i<n)
    {
        if(max<array[i])
            max=array[i];
        f(n,i+1,array[n],max);
    }
    return max;   
}
int main()
{
    int n,i=0,array[100],max,min,result;
    printf("Enter the number of elements you want to store:\n");
    scanf("%d",&n);
    printf("Enter the elements:\n");
    for(i;i<n;i++)
    {
        scanf("%d",&array[i]);
    }
    max=array[0];
    min=array[0];
    result=f(n,i,array,max);
    printf("Max=%d\n",result);
    return 0;
}