
public class pattern {

	public static void main(String[] args) {
		int k=0;
		for(int i=1; i<=7; i++)
		{
			for( int j=1; j<=i; j++)
			{
				k++;
				System.out.print(k+ " ");
			}
			System.out.println();
		}
	System.out.println("\n\n");
		for(int i=7; i>=1; i--)
		{
			for( int j=i; j>=1; j--)
			{
				System.out.print(k+" ");
				k--;
			}
			System.out.println();
		}
	}

}
