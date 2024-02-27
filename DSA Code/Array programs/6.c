//Remove duplicate in arrays using sorting method 
#include<stdio.h>

#include<stdlib.h>
void sorting(int *array,int n)
{
    int temp;
    for (int i=0;i<(n-1);i++)
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
}
int main()
{
    int array[100],n,temp[100],j=0,i=0;
    printf("Enter the number of elements you want to sort:\n");
    scanf("%d",&n);
    printf("Enter the %d elements you want to sort:\n",n);
    for(int i=0;i<n;i++)
        scanf("%d",&array[i]);
    sorting(array,n);
    //Now removing the duplicate elements
    for(i=0;i<(n-1);i++)
    {
        if(array[i]!=array[i+1])
        {
            temp[j]=array[i];
            j++;
        }
    }
    temp[j]=array[i];
    for(i=0;i<=j;i++)
        printf("%d\t",temp[i]);
    return 0;
}