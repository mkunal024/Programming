/*Create Date class with members day, month, year. Write no argument and parameterized constructor. 
Create two object s and initialize them using no argument and parameterized constructor respectively. 
Print date using display function*/


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