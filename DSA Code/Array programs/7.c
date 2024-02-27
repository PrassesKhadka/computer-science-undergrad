#include<stdio.h>

#include<stdlib.h>

int main()
{
    int array[10][10],i,j,m,n,zero=0,num=0;
    printf("Enter the rows and columns you want in a matrix:\n");
    scanf("%d",&m);
    scanf("%d",&n);
    for (i=0;i<m;i++)
    {
        for(j=0;j<n;j++)
        {
            printf("Enter element [%d][%d]:\t",i,j);
            scanf("%d",&array[i][j]);
            if(array[i][j]==0)
                zero++;
            else
                num++;
        }
    }
    printf("Your entered array is:\n");
    for(i=0;i<m;i++)
    {
        for(j=0;j<n;j++)
        {
            printf("%d\t",array[i][j]);
        }
        printf("\n");
    }
    if(zero>num)
        printf("The matrix is a sparse matrix\n");
    else
        printf("The matrix is not a sparse matrix\n");
    return 0;
}