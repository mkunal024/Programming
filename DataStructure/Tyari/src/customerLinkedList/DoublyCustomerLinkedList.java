package customerLinkedList;

public class DoublyCustomerLinkedList {
private Customer head;
private Customer tail;

public DoublyCustomerLinkedList() {
	super();
	this.head = null;
	this.tail = null;
}

public void addCustomer(Customer customer)
{
	if(head==null)
	{
		head=customer;
		tail=customer;
	}
	else
	{
		customer.setPrev(tail);
		tail.setNext(customer);
		tail=customer;
	}
}

public void displayCustomers()
{
	Customer current=head;
	while(current!=null)
	{
		System.out.println("Name : "+current.getName()+" id= "+current.getId());
		current=current.getNext();
	}
}

public Customer searchCustomerByid(int id)
{
	Customer current=head;
	while(current!=null)
	{
		if(current.getId()==id)
		{
			System.out.println("Name : "+current.getName()+" id= "+current.getId());
			return current;
		}
		current=current.getNext();
	}
	return null;
}
public void RemoveCustomer(Customer customer)
{
	if(customer==null)
	{
		return;
	}
	if(customer.getPrev()!=null)
	{
		customer.getPrev().setNext(customer.getNext());
	}
	else
	{
		head=customer.getNext();
	}
	if(customer.getNext()!=null)
	{
		customer.getNext().setPrev(customer.getPrev());
	}
	else {
		tail=customer.getPrev();
	}
}
}
