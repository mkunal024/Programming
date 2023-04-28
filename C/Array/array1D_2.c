#include <stdio.h>
int main()
{
    int n,key,f=0;
    printf("Enter the size of an array : ");
    scanf("%d",&n);
    int a[n];
    printf("Enter the elemnt of an array :\n");
    for(int i=0;i<n;i++)
    {
      scanf("%d",&a[i]);
    }
    printf("Enter the key : ");
    scanf("%d",&key);

     for(int i=0;i<n;i++)
     { 
        if(key==a[i])
        {
            f++;
            
        }}
        if(f>=1)
        {
        printf("Key = %d is present in an array \n",key);
        }
        else{
            printf("Key = %d is not present in an array \n",key);
        }
     }