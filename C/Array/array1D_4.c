#include <stdio.h>
int main()
{
    int n,a=0;
    printf("Enter the size of an array : ");
    scanf("%d",&n);
    int num[n];
    printf("Enter the elemnt of an array :\n");
    for(int i=0;i<n;i++)
    {
      scanf("%d",&num[i]);
    }

    for (int i = 0; i < n; ++i){
   for (int j = i + 1; j < n; ++j){
      if (num[i] < num[j]){
         a = num[i];
         num[i] = num[j];
         num[j] = a;
      }
   }
}
printf("Sorted array is :\n");
for(int i=0;i<n;i++)
    {
      printf("%d ",num[i]);
    }
    return 0;
}