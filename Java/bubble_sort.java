
public class bubblesort {
	public static void main(String[] args) {
		int num[]= {16,25,34,43,52,4,36,6,735,8,90,111};
		System.out.println("Unsorted array : ");
		for(int i=0; i<num.length;i++)
		{
			System.out.print(num[i]+ " ");
		}
		System.out.println("\n\n");
		
		for(int i=0;i<num.length-1;i++)
		{
			for(int j=0;j<num.length-i-1;j++)
			{
				if(num[j]>num[j+1])
				{
					int t=num[j];
					num[j]=num[j+1];
					num[j+1]=t;
				}
			}
		}
		System.out.println("\nSorted array : ");
		for(int i=0; i<num.length;i++)
		{
			System.out.print(num[i]+ " ");
		}
	}
}
