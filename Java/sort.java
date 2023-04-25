import java.util.Arrays;
public class sort {
	public static void main(String args[])
	{
		
		int num[]= {16,25,34,43,52,36,4,6,735,8,90,111};
		System.out.println("Unsorted array : ");
		for(int i=0; i<num.length;i++)
		{
			System.out.print(num[i]+ " ");
		}
		System.out.println("\nSorted array :");
		Arrays.sort(num);
		for(int i=0; i<num.length;i++)
		{
			System.out.print(num[i]+ " ");
		}

}
}
