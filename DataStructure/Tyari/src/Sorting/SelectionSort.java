package Sorting;

public class SelectionSort {

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
		for(int j=0;j<data.length;j++)
		{
			if(data[i]<data[j])
			{
				max++;
				int temp=data[i];
				data[i]=data[j];
				data[j]=temp;
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
