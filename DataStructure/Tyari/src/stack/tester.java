package stack;

public class tester {

	public static void main(String[] args) {
		Stack s=new Stack(5);
		s.push(5);
		s.push(4);
		s.push(3);
		s.push(2);
		s.display();
		System.out.println("peek "+s.peek());
		System.out.println("pop "+s.pop());
		System.out.println("peek "+s.peek());
		s.display();
		

	}

}
