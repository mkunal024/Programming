package doublyLinkedList;

public class DoublyLinkedList {
private Node head;

public DoublyLinkedList() {
	head=null;
}

@SuppressWarnings("unused")
public boolean insert(int data)
{
	Node newNode=new Node(data);
	if(newNode==null)
	{
		return false;
	}
	if(head==null)
	{
		head=newNode;
		return true;
	}
	Node last=head;
	while(last.getNext()!=null)
	{
		last=last.getNext();
	}
	last.setNext(newNode);
	newNode.setPrev(last);
	return true;
}

public void display()
{
	Node temp=head;
	while(temp!=null)
	{
		System.out.print(temp.getData()+" ");
		temp=temp.getNext();
	}
	System.out.println();
}
public boolean insert(int data,int pos)
{
	if(pos<=0)
	{
		return false;
	}
	Node newNode=new Node(data);
	if(newNode==null)
	{
		return false;
	}
	if(pos==1)
	{
		if(head!=null) {
			newNode.setNext(head);
			head.setPrev(newNode);
		}
		head=newNode;
		return true;
	}
}
}
