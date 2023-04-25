
public class binary {
	public static void main(String args[])
	{
		int n=111,f=0,loc;
		int num[]= {1,2,3,4,5,36,45,64,73,82,90,111};
		int last=num.length;
		if(last>0)
		{
			int mid = 1+ (last-1)/2;
			for(int i=0;i<last-1;i++)
			{
			if(n==num[mid])
			{
				f=1;
				loc=mid;
			}
			else if(n>num[mid])
			{
				mid++;
			}
			else
			{
				mid--;
			}
		}
			System.out.println(mid+1);
	}
	}
}
