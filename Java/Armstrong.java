import java.util.Scanner;
public class Armstrong {
	public static void main(String args[])
	{
		int num,n,sum=0,temp;
		Scanner sc=new Scanner(System.in);
		System.out.print("Enter a number to check whether it is armstrong or not : ");
	num=sc.nextInt();
	temp=num;
  String s= String.valueOf(num);
  int len=s.length();
  for(int i=1;i<=len;i++)
  {
	  n=num%10;
	  sum+=Math.pow(n,len);
	  num=num/10;
  }
    if(temp==sum)
	System.out.println(temp+" is a Armstrong number");
    else
    	System.out.println(temp+" is not a Armstrong number");
}
}
