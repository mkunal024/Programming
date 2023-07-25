
public class Main {

	public static void main(String[]args)
	{
		LinkedList ll=new LinkedList();
		ll.insert(10);
		ll.insert(20);
		ll.display();
		ll.insert(30);
		ll.insert(40);
		
		ll.display();
		ll.insertAtposition(15, 2);
		ll.display();
		ll.insert(50);
		ll.display();
		ll.insertAtposition(89, 6);
		ll.display();
		ll.deleteByPosition(5);
		ll.display();
		
	}
}
