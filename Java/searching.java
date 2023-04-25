
public class searching {
public static void main(String args[])
{
	int n=101,flag=0;
	int num[]= {1,27,36,45,5,64,73,82,9,11};
	for(int i=0; i<num.length;i++)
	{
		if(n==num[i])
		{
			flag=1;
		}
	}
	if(flag==1)
		{
			System.out.println(n+" is present.");
		}
		else
		{
			System.out.println(n+" is not present");
		}
	}
}

