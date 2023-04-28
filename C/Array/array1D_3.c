#include <stdio.h>
int main()
{
    int n,num,count=0;
    printf("Enter the size of an array : ");
    scanf("%d",&n);
    int a[n];
    printf("Enter the elemnt of an array :\n");
    for(int i=0;i<n;i++)
    {
      scanf("%d",&a[i]);
    }
    printf("Enter the key : ");
    scanf("%d",&num);

     for(int i=0;i<n;i++)
     { 
        if(num==a[i])
        {
            count++;
            
        }}
        if(count>=1)
        {
        printf("Num = %d is present in an array %d times \n",num,count);
        }
        else{
            printf("Num = %d is not present in an array \n",num);
        }
        return 0;
     }