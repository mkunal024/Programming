/*Create a class Person with data members as name, age, city. Write getters and setters for all the data 
members. Also add the display function. Create Default and Parameterized constructors. Create the object 
of this class in main method and invoke all the methods in that class.*/


#include <iostream>
using namespace std;

class person {
  private:
    // Private attribute
    int age;
    string name;
    string city;

  public:
    // Setter
    void accept(int a,string n,string c) {
      age=a;
      name=n;
      city=c;
    }
    // Getter
    int display() {
        cout<<"Name :"<<name<<endl;
        cout<<"Age :"<<age<<endl;
         cout<<"city :"<<city<<endl;
    }
};

int main() {
  person myObj;
  myObj.accept(21,"Rohit","Mumbai");
  myObj.display();
  return 0;
}
