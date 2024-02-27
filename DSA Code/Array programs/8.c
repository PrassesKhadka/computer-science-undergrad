//matrix is symmetric or not 
#include<stdio.h>

#include<stdlib.h>

int main()
{
    int array[10][10],m,n,i,j,count=0;
    printf("Enter the value of rows and columns of a square matrix:\n");
    scanf("%d",&m);
    scanf("%d",&n);
    if(m!=n)
        exit(printf("The given matrix is not a square matrix!!!"));

    for(i=0;i<m;i++)
    {
        for(j=0;j<n;j++)
        {
            printf("Enter the element [%d][%d]:\t",i,j);
            scanf("%d",&array[i][j]);
        }
    }
     for(i=0;i<m;i++)
    {
        for(j=0;j<n;j++)
        {
            if(array[j][i]!=array[i][j])
                exit(printf("The given matrix is not a symmetrix matrix"));
        }
    }
    printf("The given matrix is a symmetrix matrix\n");
    return 0;
}