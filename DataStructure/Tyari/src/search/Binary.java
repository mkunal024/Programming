package search;

public class Binary{
public static void main(String []args)
{
  int data[] = { 2, 5, 8, 11, 23, 39, 47, 58, 69 };
	int val=11;
	int first=0;
	int last=data.length;
	
	int mid=(first+last)/2;
       while(first<=last)
       {
    	   if(data[mid]==val)
    	   {
    		   System.out.println("value found at "+mid);
    		   break;
    	   }
    	   else if(data[mid]>val)
    	   {
    		   last=mid-1;
    		   System.out.println("First = "+first+" Last = "+last);
    	   }
    	   else
    	   {
    		   first=mid+1;
    		   System.out.println("First = "+first+" Last = "+last);
    	   }
    	   mid=(first+last)/2;
       }
}
}
