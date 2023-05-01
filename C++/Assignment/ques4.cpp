/*Create a class Book with data members as bname, id, author, price. Write getters and setters for all the 
data members. Also add the display function. Create Default and Parameterized constructors. Create 
the object of this class in main method and invoke all the methods in that class*/


#include <iostream>
using namespace std;
class Book{
    private:
   int id,price;
   string bname, author;
   public:
   void input()
   {
    cout<<"Enter id :";
    cin>>id;
    cout<<"Enter bname :";
    cin>>bname;
    cout<<"Enter author :";
    cin>>author;
    cout<<"Enter price :";
    cin>>price;
   }
   void display()
   {
    cout<<"ID : "<<id<<" Book : "<<bname<<" Author : "<<author<<"Price : "<<price<<endl;
   }
};

int main()
{
    Book myobj;
    myobj.input();
    myobj.display();
    return 0;
}