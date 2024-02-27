//Addition,Subtraction and Multiplicaion of a matrix 
#include<stdio.h>

#include<stdlib.h>

void Addition(int array1[10][10],int array2[10][10],int m1,int n1,int m2,int n2) 
{
    int add[10][10],i,j;
    if(m1!=m2 && n1!=n2)
        printf("Since both the matrix donot have the same rows and colums they cannot be added:\n");
    else
        for(i=0;i<m1;i++)
        {
            for(j=0;j<n1;j++)
            {
                add[i][j]=array1[i][j] + array2[i][j];
                printf("%d\t",add[i][j]);
            }
            printf("\n");
        }
}
void Subtraction(int array1[10][10],int array2[10][10],int m1,int n1,int m2,int n2)
{
    int sub[10][10],i,j;
    if(m1!=m2 && n1!=n2)
        printf("Since both the matrix donot have the same rows and colums they cannot be subtracted:\n");
    else    
        for(i=0;i<m1;i++)
        {
            for(j=0;j<n1;j++)
            {
                sub[i][j]=array1[i][j]-array2[i][j];
                printf("%d\t",sub[i][j]);
            }
            printf("\n");
        }
}
void Multiplication(int array1[10][10],int array2[10][10],int m1,int n1,int m2,int n2)
{
    int mult[10][10],sum=0;
    if(n1!=m2)
        printf("The Matrices cannot be multiplied:\n");
    for(int i=0;i<m1;i++)
    {
        for(int j=0;j<n2;j++)
        {
            for(int k=0;k<n1;k++)
            {
                sum+=array1[i][k]*array2[k][j];
            }
            mult[i][j]=sum;
            sum=0;
        }
    }
    for(int i=0;i<m1;i++)
    {
        for(int j=0;j<n2;j++)
        {
            printf("%d\t",mult[i][j]);
        }
        printf("\n");
    }
}
int main()
{
    int array1[10][10],array2[10][10],m1,n1,m2,n2,i,j;
    printf("Enter the value of rows and columns of a first matrix:\n");
    scanf("%d",&m1);
    scanf("%d",&n1);
    printf("Enter the 1st matrix:\n");
    for(i=0;i<m1;i++)
    {
        for(j=0;j<n1;j++)
        {
            printf("Enter the element [%d][%d]:\t",i,j);
            scanf("%d",&array1[i][j]);
        }
    }
    printf("\n");
    printf("Enter the value of rows and columns of second matrix:\n");
    scanf("%d",&m2);
    scanf("%d",&n2);
    printf("Enter the 2nd matrix:\n");
    for(i=0;i<m2;i++)
    {
        for(j=0;j<n2;j++)
        {
            printf("Enter the element [%d][%d]:\t",i,j);
            scanf("%d",&array2[i][j]);
        }
    }
    printf("Addition:\n");
    Addition(array1,array2,m1,n1,m2,n2);
    printf("Subtraction:\n");
    Subtraction(array1,array2,m1,n1,m2,n2);
    printf("Multiplication:\n");
    Multiplication(array1,array2,m1,n1,m2,n2);

    return 0;
}