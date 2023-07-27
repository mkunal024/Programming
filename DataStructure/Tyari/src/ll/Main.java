package ll;

public class Main {

	public static void main(String[]args)
	{
	LinkedList list=new LinkedList();
	list.insert(50);
	list.insert(40);
	list.insert(30);
	list.display();
	list.insertAtFirst(10);
	list.display();
	list.insertAtposition(5, 1);
	list.insertAtposition(25, 4);
	list.display();
}
}