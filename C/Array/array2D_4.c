#include<stdio.h>
int main()
{
    int choice,f=0,t=0,sum=0,n;
    printf("Enter 1 to check matrix is symmetric or not.\nEnter 2 to get the sum of diagonal elements.\nEnter 3 to check matrix is an upper triangular matrix\n");
     scanf("%d",&choice);
      printf("Enter the size of an square matrix: ");
      scanf("%d",&n);
      int A[n][n],B[n][n];
     printf("Enter the elements of matrix: \n");
     for(int i=0;i<n;i++)
     {
      for(int j=0;j<n;j++)
      {
         scanf("%d",&A[i][j]);
      }
     }
     for(int i=0;i<n;i++)
     {
      for(int j=0;j<n;j++)
      {
          printf("%d ",A[i][j]);
      } printf("\n");
     }

    switch(choice)
     {
      case 1: for(int i=0;i<n;i++)
               {
                  for (int j=0;j<n;j++)
                  {
                     B[j][i]=A[i][j];
                  }
               } 
               for(int i=0;i<n;i++)
               {
                  for (int j=0;j<n;j++)
                  {
                     if(A[i][j]==B[i][j])
                      f++;
                  }}
                  if(f==9)
                  printf("Matrix is symmetric.\n");
                  else
                  printf("Matrix is not symmetric.\n");
                  break;

      case 2: for(int i=0;i<n;i++)
               {
                      sum=sum+A[i][i];
               }
               printf("Sum of principal diagonal = %d\n",sum);
                sum=0;
               for(int i=1;i<n;i++)
               {
                  for(int j=n-1;j>=0;j--)
                  {
                      sum=sum+A[i][j];
                      break;
                  }
               }
               printf("Sum of secondary diagonal = %d\n",sum);
              
       break;
      
      case 3:  
       for (int i = 1; i < n; i++)
       {
        for (int j = 0; j < i; j++)
        {
            if (A[i][j] == 0)
            {
                 t=1;
            }
        }
       } if(t==1)
          printf("Matrix is upper triangular matrix.\n");
          else
          printf("Matrix is not upper triangular matrix.\n");
      break;
      default: ("Invalid choice.\n");
     }
return 0;
}

