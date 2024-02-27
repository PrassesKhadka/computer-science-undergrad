//Deleting elements in an array
#include<stdio.h>

#include<stdlib.h>

int main()
{
    int array[100],n,position,a=1;
    printf("Enter the number of elements you want to store:\n");
    scanf("%d",&n);
    printf("Enter the %d numbers you want to store:\n",n);
    for (int i=0;i<n;i++)
    {
        scanf("%d",&array[i]);
    }
    printf("Enter the position of the element you want to delete from array:\n");
    scanf("%d",&position);
    array[position-1]=array[position];
    for(int i=(position-1);i<(n-1);i++)
        array[i]=array[i+1];
    for(int i=0;i<(n-1);i++)
    {
        printf("%d\t",array[i]);
    }
    return 0;
}