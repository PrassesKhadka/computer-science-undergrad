//Largest and smallest element in an array 
#include<stdio.h>

#include<stdlib.h>

int main()
{
    int min,max=0;
    int array[100],n;
    printf("Enter the number of elements you want to store:\n");
    scanf("%d",&n);
    printf("Enter the %d numbers you want to store:\n",n);
    for (int i=0;i<n;i++)
    {
        scanf("%d",&array[i]);
    }
    min=array[0];
    for(int i=1;i<n;i++)
    {
        if(min>array[i])
            min=array[i];
    }
    max=array[0];
    for(int i=1;i<n;i++)
    {
        if(array[i]>max)
            max=array[i];
    }
    printf("Max=%d\n",max);
    printf("Min=%d",min);
    return 0;
}