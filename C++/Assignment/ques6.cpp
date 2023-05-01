/*Create a class ComplexNumber with data members real, imaginary. Create Default and Parameterized 
constructors. Write getters and setters for all the data members. Also add the display function. Create 
the object of this class in main method and invoke all the methods in that class.*/


#include <iostream>
using namespace std;
class ComplexNumber{
    private:
   int real,imaginary;
   public:
   void input()
   {
    cout<<"Enter real number :";
    cin>>real;
    cout<<"Enter imaginary number :";
    cin>>imaginary;

   }
   void display()
   {
    if(imaginary>=0)
    cout<<real<<"+"<<imaginary<<"i"<<endl;
    else
    cout<<real<<imaginary<<"i"<<endl;
   }
};

int main()
{
    ComplexNumber myobj;
    myobj.input();
    myobj.display();
    return 0;
}