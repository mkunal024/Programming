package customerLinkedList;

public class Tester {
public static void main(String []args)
{
	Customer c=new Customer(1,"Kunal","Pune");
	Customer c1=new Customer(2,"Prateek","Pune");
	Customer c2=new Customer(3,"Ayush","Pune");
	Customer c3=new Customer(4,"Anant","Pune");
	DoublyCustomerLinkedList cust=new DoublyCustomerLinkedList();
	cust.addCustomer(c);
	cust.addCustomer(c1);
	cust.addCustomer(c2);
	cust.addCustomer(c3);
	
	cust.displayCustomers();
	System.out.println("-----");
	cust.searchCustomerByid(2);
	cust.RemoveCustomer(c);
	cust.displayCustomers();
}
}
