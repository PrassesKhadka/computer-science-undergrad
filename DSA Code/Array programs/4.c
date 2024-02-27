//Sum of N numbers using arrays
#include<stdio.h>

#include<stdlib.h>

int main()
{
    int array[100],n,sum=0;
    printf("Enter the number of elements you want to store:\n");
    scanf("%d",&n);
    printf("Enter the %d numbers you want to store:\n",n);
    for (int i=0;i<n;i++)
    {
        scanf("%d",&array[i]);
        sum+=array[i];
    }
    printf("Sum:%d\n",sum);
    return 0;
}