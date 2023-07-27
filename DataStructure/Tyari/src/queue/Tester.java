package queue;

public class Tester {

	public static void main(String[] args) {
		Queue q=new Queue(5);
		q.insert(10);
		q.insert(20);
		q.insert(30);
		q.insert(40);
		q.insert(50);
		q.display();
		q.delete();
		q.display();
		

	}

}
