/*Create a class Date with data members as dd, mm, yy. Write getters and setters for all the data 
members. Also add the display function. Create Default and Parameterized constructors. Create the 
object of this class in main method and invoke all the methods in that class. */


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

int main()
{
    Date myobj;
    myobj.input();
    myobj.display();
    return 0;
}