
public class selectionsort {

	public static void main(String[] args) {
		int num[]= {16,5,3,43};
		System.out.println("Unsorted array : ");
		for(int i=0; i<num.length;i++)
		{
			System.out.print(num[i]+ " ");
		}
		System.out.println("\n\n");
		
		for(int i=0;i<num.length-1;i++)
		{
			int index=i;
			for(int j=i+1;j<num.length;j++)
			{
				if(num[j]<num[index])
				{
					index=j;
				}
				int t =num[index];
				num[index]=num[i];
				num[i]=t;
				
				for(int z=0; z<num.length;z++)
				{
					System.out.print(num[z]+ " ");
				}
				System.out.println();
			}
		}
		System.out.println("\nSorted array : ");
		for(int i=0; i<num.length;i++)
		{
			System.out.print(num[i]+ " ");
		}

	}

}
