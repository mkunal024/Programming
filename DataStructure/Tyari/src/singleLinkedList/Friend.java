package singleLinkedList;

public class Friend {
private int id;
private String name;
private Friend next;
public Friend(int id, String name) {
	super();
	this.id = id;
	this.name = name;
	this.next = null;
}
public int getId() {
	return id;
}
public void setId(int id) {
	this.id = id;
}
public String getName() {
	return name;
}
public void setName(String name) {
	this.name = name;
}
public Friend getNext() {
	return next;
}
public void setNext(Friend next) {
	this.next = next;
}
}
