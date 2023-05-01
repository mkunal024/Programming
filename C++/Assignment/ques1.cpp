/* Write a program to create student class with data members rollno, marks1, mark2, mark3.
Accept data (acceptInfo()) and display using display member function.
Also display total, percentage and grade.*/



#include <iostream>
using namespace std;
class student
{
 int rollno,marks1,marks2,marks3;
 float per;
public: void acceptinfo();
void display();
void calculate();
};
void student::acceptinfo()
{
     cout<<"Enter roll number : ";
     cin>>rollno; 
    cout<<"Enter makrs1 out of 100: ";
     cin>>marks1; 
    cout<<"Enter marks2 out of 100: ";
     cin>>marks2; 
     cout<<"Enter marks3 out of 100: ";
     cin>>marks3;  
}
void student::display()
{
    cout<<"Roll number " << rollno << "\nMarks1 = " <<marks1 << "\nMarks2 =" <<marks2 << "\nMarks3 =" <<marks3;
}  
void student::calculate()
{
int total =marks1 + marks2 + marks3;
float per = total/3;
cout<<"\nPercentage = "<<per<<"%   ";
    if(per>=60)
     cout<<"First division";
     else if(per<60 && per>=50)
     cout<<"Second division";
     else if(per<50 && per>=40)
     cout<<"Third division";
     else
     cout<<"Fail";
}
int main()
{
    student s;
    s.acceptinfo();
    s.display();
    s.calculate();
    return 0;
}
