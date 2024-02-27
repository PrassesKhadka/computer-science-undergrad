//Reverse an array
#include<stdio.h>

#include<stdlib.h>

int main()
{
    int array[100],temp,n,i,j;
    printf("Enter the number of elements you want to store in an array:\n");
    scanf("%d",&n);
    printf("Enter the %d elements you want to store:\n",n);
    for (i=0;i<n;i++)
        scanf("%d",&array[i]);
    for(i=0;i<n/2;i++)
    {
        temp=array[i];
        array[i]=array[n-(i+1)];
        array[n-(i+1)]=temp;
    }
    printf("The reverse of an array:");
    for(i=0;i<n;i++)
    {
        printf("%d\t",array[i]);
    }
    return 0;
}