//Sorting in an array
//Selection sort 
#include<stdio.h>

#include<stdlib.h>

int main()
{
    int array[100],n,temp;
    printf("Enter the number of elements you want to sort:\n");
    scanf("%d",&n);
    printf("Enter the %d elements you want to sort:\n",n);
    for(int i=0;i<n;i++)
        scanf("%d",&array[i]);
    for(int i=0;i<(n-1);i++)
    {
        for(int j=i+1;j<n;j++)
        {
            if(array[j]<array[i])
            {
                temp=array[i];
                array[i]=array[j];
                array[j]=temp;
            }
        }
    }
    printf("The sorted array is:");
    for(int i=0;i<n;i++)
        printf("%d\t",array[i]);
    return 0;
}