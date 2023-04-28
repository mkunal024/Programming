/*Write a program to accept n numbers in an array and display the largest and smallest number. Using 
these values, calculate the range of elements in the array.*/


#include <stdio.h>
int main()
{
    int n;
    int min=0, max=0;
    printf("Enter the size of an array : ");
    scanf("%d",&n);
    int a[n];
    printf("Enter the elemnt of an array :\n");
    for(int i=0;i<n;i++)
    {
      scanf("%d",&a[i]);
    }

     for(int i=0;i<n;i++)
     { 
        min =a[i];
        max =a[i];
        for(int j=0;j<n;j++)
        {
        if(a[j]<min)
        {
            min =a[j];
        }
        if(a[j]>max)
        {
            max =a[j];
        }
     }
     }
     printf("Max = %d and Min = %d\n",max,min);
     printf("Range of an array is %d-%d",min,max);
    return 0;
}