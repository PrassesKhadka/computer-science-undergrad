//Determinant of 2x2 matrix
#include<stdio.h>

#include<stdlib.h>

int main()
{
    int array[10][10],i,j;
    for(i=0;i<2;i++)
    {
        for(j=0;j<2;j++)
        {
            printf("Enter the element [%d][%d]:\t",i,j);
            scanf("%d",&array[i][j]);
        }
    }
    int determinant=(array[0][0]*array[1][1])-(array[1][0]*array[0][1]);
    printf("Determinant:\n%d",determinant);
    return 0;
}