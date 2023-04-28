#include <stdio.h>
int main()
{
    int m,n;
    printf("Enter the row and column of an array : ");
    scanf("%d %d",&m,&n);
    int A[m][n],B[n][m];

     printf("Enter the elements of an array : \n");
    for(int i=0;i<m;i++)
    {
    for(int j=0;j<n;j++)
    {
    scanf("%d",&A[i][j]);
    }
    }
   
   printf("Matrix is : \n");
    for(int i=0;i<m;i++)
    {
    for(int j=0;j<n;j++)
    {
    printf("%d ",A[i][j]);
    }
    printf("\n");
    }

    for(int i=0;i<m;i++)
    {
    for(int j=0;j<n;j++)
    {
        B[j][i] = A[i][j];
    }
    }
    printf("Matrix  after transpose is : \n");
    for(int i=0;i<n;i++)
    {
    for(int j=0;j<m;j++)
    {
    printf("%d ",B[i][j]);
    }
    printf("\n");
    }


    return 0;
}