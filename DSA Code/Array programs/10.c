//Normal and Trace of a square matrix 
#include<stdio.h>

#include<stdlib.h>
#include<math.h>  //For pow function

int main()
{
    int array[10][10],m,n,i,j,sumsq=0,trace=0;
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
    //For Trace and Normal of a matrix
    for(i=0;i<m;i++)
    {
        for(j=0;j<n;j++)
        {
            if(i==j)
                trace+=array[i][j];
            int a=pow(array[i][j],2);
            sumsq+=a;
        }
    }
    printf("The Trace of the matrix is:\t%d\n",trace);
    printf("The Normal of the matrix is:\t%lf\n",sqrt((double)sumsq));
    return 0;
}