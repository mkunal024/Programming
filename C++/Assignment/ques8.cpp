/*Create Employee class with members id(int),name(string),dob(Date).Use above created Date class. 
Write default and parameterized constructor in Employee Class.Write accept () function to accept 
information and display () to display emp information.*/

#include <iostream>
using namespace std;

class Date{
    private:
   int dd,mm,yy;
   public:
   void input()
   {
    cout<<"Enter day :";
    cin>>dd;
    cout<<"Enter month :";
    cin>>mm;
    cout<<"Enter year :";
    cin>>yy;
   }
   void display()
   {
    cout<<dd<<"-"<<mm<<"-"<<yy<<endl;
   }
};

class Employee{
    private:
   int id;
   string name;
   public:
   void accept()
   {
    cout<<"Enter id: ";
    cin>>id;
    cout<<"Enter name: ";
    cin>>name;

   }
   void display()
   {
    cout<<"Id = "<<id<<" and "<<"Name ="<<name<<endl;
   }
};

int main()
{
    Employee myobj;
     Date obj2;
    myobj.accept();
    obj2.input();
    myobj.display();
    obj2.display();
    return 0;
}