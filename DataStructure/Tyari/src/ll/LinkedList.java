package ll;

public class LinkedList {

private Node head;

public LinkedList() {
	head = null;
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

public boolean insertAtFirst(int data)
{
	Node newNode =new Node(data);
	if(newNode==null)
	{
		return false;
	}
	if(head==null)
	{
		head=newNode;
	}
       newNode.setNext(head);
       head=newNode;
	return true;
}

public boolean insertAtposition(int data,int pos)
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
		newNode.setNext(head);
		head=newNode;
		return true;
	}
	Node temp=head;
	for(int i=1;i<pos-1;i++)
	{
		temp=temp.getNext();
		if(temp==null)
		{
			return false;
		}
	}
	newNode.setNext(temp.getNext());
	temp.setNext(newNode);
	return true;
}
	
}
