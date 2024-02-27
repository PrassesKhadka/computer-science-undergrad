//To insert an array 
#include<stdio.h>

#include<stdlib.h>

int main()
{
    int array[100],n,position,num;
    printf("Enter the number of elements you want to store:\n");
    scanf("%d",&n);
    printf("Enter the %d numbers you want to store:\n",n);
    for (int i=0;i<n;i++)
    {
        scanf("%d",&array[i]);
    }
    printf("Enter the positon you want to insert a number:\n");
    scanf("%d",&position);
    printf("Enter the number you want to store:\n");
    scanf("%d",&num);
    for(int i=(n-1);i>=(position-1);i--)
    {
        array[i+1]=array[i];
    }
    array[position-1]=num;
    printf("The resultant values are:");
    for(int i=0;i<=n;i++)
        printf("%d\t",array[i]);

    
    return 0;
}