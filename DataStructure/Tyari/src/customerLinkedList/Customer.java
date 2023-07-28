package customerLinkedList;

public class Customer {
private int id;
private String name;
private String address;
private Customer next;
private Customer prev;
public Customer(int id, String name, String address) {
	super();
	this.id = id;
	this.name = name;
	this.address = address;
	this.next = null;
	this.prev = null;
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
public String getAddress() {
	return address;
}
public void setAddress(String address) {
	this.address = address;
}
public Customer getNext() {
	return next;
}
public void setNext(Customer next) {
	this.next = next;
}
public Customer getPrev() {
	return prev;
}
public void setPrev(Customer prev) {
	this.prev = prev;
}
}
