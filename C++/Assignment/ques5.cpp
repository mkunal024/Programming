/*Create a class Point with data members as x,y. Create Default and Parameterized constructors. Write 
getters and setters for all the data members. Also add the display function. Create the object of this 
class in main method and invoke all the methods in that class.*/


#include <iostream>
using namespace std;
class Point{
    private:
   int x,y;
   public:
   void input()
   {
    cout<<"Enter point x: ";
    cin>>x;
    cout<<"Enter point y: ";
    cin>>y;

   }
   void display()
   {
    cout<<"x = "<<x<<" and "<<"y ="<<y<<endl;
   }
};

int main()
{
    Point myobj;
    myobj.input();
    myobj.display();
    return 0;
}