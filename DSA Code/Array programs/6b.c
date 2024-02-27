//program to remove duplicate elements without sorting the array 
#include<stdio.h>

#include<stdlib.h>

int main()
{
    int array[100],temp[100],n,count=0,i,j;
    printf("Enter the number of elements you want to store in an array:\n");
    scanf("%d",&n);
    printf("Enter the %d elements you want to store:\n",n);
    for (int i=0;i<n;i++)
        scanf("%d",&array[i]);

    //To remove duplicate elements

    for(i=0;i<n;i++)              //To get the element from an array
    {
        for(j=0;j<count;j++)      
        //To traverse the temp array to compare it with the element from array[100] 
        //till  count as count indicates the index of the temp array which is left to be fill
        {
            if(temp[j]==array[i])
                break;
        }
        if(count==j)
        {
            temp[count]=array[i];
            count++;
        }
    }
    printf("The resultant array after the removal of the duplicates is: ");
    for(i=0;i<count;i++)
        printf("%d\t",temp[i]);
    return 0;
}