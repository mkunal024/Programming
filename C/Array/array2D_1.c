#include <stdio.h>
int main()
{
    int r=0,c=0,i,j,sum=0;
    printf("Enter a row and column : ");
    scanf("%d %d",&r,&c);
    printf("Enter the elements of an array-\n");
    int a[r][c];
    for(i=0;i<r;i++)
    {
        for(j=0;j<c;j++)
        {
            scanf("%d",&a[i][j]);
        }
    }

      for(i=0;i<r;i++)
         {
        for(j=0;j<c;j++)
        {   
            printf("%d ",a[i][j]);
        }
        printf("\n");
    }
    for(i=0;i<r;i++)
         {
        for(j=0;j<c;j++)
        {  
            sum=sum+a[i][j];
           
         }
          printf("Sum of %d row is %d\n",i+1,sum);
          sum=0;
         }

         for(j=0;j<c;j++)
         {
        for(i=0;i<r;i++)
        {  
            sum=sum+a[i][j];
           
         }
          printf("Sum of %d column is %d\n",j+1,sum);
          sum=0;
         }
    return 0;
}