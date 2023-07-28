package singleLinkedList;

public class SIIFriend {
private Friend head;

public SIIFriend() {
	head=null;
}

public boolean insert(Friend friend)
{
	if(friend==null)
	{
		return false;
	}
	if(head==null)
	{
		head=friend;
		return true;
	}
	Friend temp=head;
	while(temp.getNext()!=null)
	{
		temp=temp.getNext();
	}
	temp.setNext(friend);
	return true;
}

public void display()
{
	Friend temp=head;
	while(temp!=null)
	{
		System.out.println(temp.getId()+" "+temp.getName());
		temp=temp.getNext();
	}
}

}
