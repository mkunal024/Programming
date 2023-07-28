package Sorting;


public class BubbleSort {

	public static void main(String[] args) {
		int[] data = { 2, 6, 3, 34, 11, 83, 7, 1, 5 };
		for(int i=0;i<data.length;i++)
		{
		System.out.print(data[i]+", ");
		} 
		System.out.println();
	int max=0;
	for(int i=0;i<data.length;i++)
	{
		for(int j=0;j<data.length-i-1;j++)
		{
			if(data[j]>data[j+1])
			{
				max++;
				int temp=data[j];
				data[j]=data[j+1];
				data[j+1]=temp;
			}
		}
	}
	for(int i=0;i<data.length;i++)
	{
	System.out.print(data[i]+", ");
	} 
	System.out.println(" max= "+max);
	}
}
