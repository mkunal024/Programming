/*Create an abstract class Shape with pure virtual method area;
Create Rectangle, Circle, Square class. Inherit them from Shape class. Override area method.
Test these all classes by creating object of respective class*/


#include <iostream>
using namespace std;

class Shape {
   protected:
    float dimension;
    int l,b;

   public:
    void getDimension() {
        cin >> dimension;
    }
    virtual float calculateArea() = 0;
};

class Rectangle : public Shape {
   public:
    float calculateArea() {
        cin>>l;
        cin>>b;
        return l * b;
    }
};
class Circle : public Shape {
   public:
    float calculateArea() {
        return 3.14 * dimension * dimension;
    }
};
class Square : public Shape {
   public:
    float calculateArea() {
        return dimension * dimension;
    }
};

int main() {
    Square square;
    Circle circle;
    Rectangle rectangle;

    cout << "Enter the length of the square: ";
    square.getDimension();
    cout << "Area of square: " << square.calculateArea() << endl;

    cout << "\nEnter radius of the circle: ";
    circle.getDimension();
    cout << "Area of circle: " << circle.calculateArea() << endl;

    cout << "\nEnter length and breath of the rectangle: ";
    cout << "Area of rectangle: " << rectangle.calculateArea() << endl;

    return 0;
}