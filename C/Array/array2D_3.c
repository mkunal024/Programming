#include <stdio.h>
int main()
{
    int m,n;
    printf("Enter row and column of matrix : ");
    scanf("%d %d",&m,&n);
  int A[m][n],B[m][n],C[m][n],D[m][n];
     printf("Enter Elememts of A matrix : ");
     for(int i=0;i<m;i++)
     {
        for(int j=0;j<n;j++)
        {
            scanf("%d", &A[i][j]);
        }
     }

      printf("Enter Elememts of B matrix : ");
     for(int i=0;i<m;i++)
     {
        for(int j=0;j<n;j++)
        {
            scanf("%d", &B[i][j]);
        }
     }
     printf("A = \n");
     for(int i=0;i<m;i++)
     {
        for(int j=0;j<n;j++)
        {
            printf("%d ", A[i][j]);
        }
         printf("\n");
     }

     printf("B = \n");
     for(int i=0;i<m;i++)
     {
        for(int j=0;j<n;j++)
        {
            printf("%d ", B[i][j]);
        }
        printf("\n");
     }

       printf("Addition of matrix A+B=C :\n");
     for(int i=0;i<m;i++)
     {
        for(int j=0;j<n;j++)
        {
            C[i][j]=A[i][j] + B[i][j];
            printf("%d ",C[i][j]);
        }
      printf("\n");
        }
 
        printf("Multiplication of matrix :\n");
        for(int i=0;i<m;i++)
        {
            for(int j=0;j<n;j++)
            {   D[i][j]=0;
                for(int k=0;k<n;k++)
                {
                D[i][j] += A[i][k]* B[k][j];
                }
                printf("%d ",D[i][j]);
            }   
              printf("\n");          
        }
     return 0;
     }
   