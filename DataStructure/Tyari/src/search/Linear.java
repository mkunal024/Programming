package search;

public class Linear {
public static void main(String []args)
{
	int arr[]= {23, 5, 6, 1, 8, 33, 2, 55 };
	int flag=0,index=0;
	for(int i=0;i<arr.length;i++)
	{
		if(arr[i]==1)
		{
			flag=1;
			index=i;
		}
	}
	if(flag==1)
		System.out.println("Elment found at pos "+(index+1));
}
}
