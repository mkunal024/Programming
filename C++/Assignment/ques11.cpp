/*Create cpp application for bank account handling.
1. Create a class BankAccount -- acct no(int),customer name(string),balance(double)
Add constr. (2 constrs : first to accept all details )

2 Add Business logic methods
Methods
public void withdraw(double amt) 
public void deposit(double amt)

3: Create object of account class and test withdraw and deposit methods.
*/
#include<iostream>
using namespace std;
class BankAccount{
    int acc_no;
    string name;
    double balance;
    public : void accept(){
        cout<<"Enter account details\nAcc. no. : ";
        cin>>acc_no;
        cout<<"Enter name ";
        cin>>name;
        cout<<"Enter balance ";
        cin>>balance;
    }
    void withdraw(double amt){
        if(balance>amt)
        balance = balance-amt;
        else
        cout<<"Insufficent balance";
    }
    void deposite(double amt){
        balance=balance+amt;
    }
    void display(){
        cout<<"Account no. :"<<acc_no<<endl<<"Name : "<<name<<endl<<"Current Balance :"<<balance<<endl<<"\tThank you"<<endl;
    }
};
int main()
{ 
    int choice; double amt;
    BankAccount bank;
    bank.accept();
    cout<<"Press 1 for withdraw\nPress 2 for deposit"<<endl;
    cin>>choice;
    switch(choice)
    {
        case 1: cout<<"Enter the amount to withdraw : ";
        cin>>amt;
        bank.withdraw(amt);
        break;
        case 2: 
        cout<<"Enter the amount to deposit : ";
        cin>>amt;
        bank.deposite(amt);
        break;
        default: cout<<"Wrong choice:"<<endl;
    }
    cout<<"\n\n";
    bank.display();
    return 0;
}