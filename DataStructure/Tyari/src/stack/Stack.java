package stack;

public class Stack {
private int arr[];
private int size;
private int top;

public Stack() {
	size=5;	
	arr=new int[5];
	top=-1;
}

public Stack(int size)
{
	this.size=size;
	arr=new int[size];
	top=-1;
}

public boolean isEmpty()
{
	return top==-1;
}
public boolean isFull()
{
	return top==(size-1);
}

public boolean push(int data)
{
	if(isFull())
	{
		return false;
	}
	arr[++top]=data;
	return true;
}

public int pop() {
	if(isEmpty())
	{
		return -999;
	}
	return arr[top--];
}

public int peek() {
	if(isEmpty()) {
		return -999;
	}
	return arr[top];
}
public void display()
{
	for(int i=0;i<=top;i++)
	{
		System.out.print(arr[i]+" ");
	}
	System.out.println();
}
}
