/* Solve this.
Fresh business scenario to apply inheritance , polymorphism to emp based organization scenario.
Create Emp based organization structure --- Emp , Mgr , Worker
1 Emp state--- id(int), name, deptId , basicSalary(double)
Accept all of above in constructor arguments.
Methods ---

2. Compute net salary ---ret 0

3 Mgr state ---id,name,basic,deptId , perfBonus
Add suitable constructor
Methods ----
1. Compute net salary (formula: basic+perfBonus) -- override computeNetSalary

4 Worker state --id,name,basic,deptId,hoursWorked,hourlyRate
Methods:
1. Compute net salary (formula: = basic+ (hoursWorked*hourlyRate) --override computeNetSalary
2. Get hrlyRate of the worker -- add a new method to return hourly rate of a worker.(getter)
Create suitable array to store organization details.
Provide following options
1. Hire Manager
I/P : all manager details
2. Hire Worker 
I/P : all worker details
3. Display information of all employees net salary (by invoking computeNetSal), 
4. Exit
----------------------------------------------------
*/

#include <iostream>
using namespace std;

class Emp{ 
    int id,deptid;
    string name;
    double basic,salary;
    
public: void input()
{
    cout<<"Enter employee id: ";
    cin>>id;
    cout<<"Enter department id: ";
    cin>>deptid;
    cout<<"Enter basic salary: ";
    cin>>basic;
}
double computeNetSalary(){
        return 0;}
        };
class Mgr{ 
    int id, deptid;
    string name;
    double basic,perfbonus,salary;
    public :  void input(){
    cout<<"Enter employee id: ";
    cin>>id;
    cout<<"Enter department id: ";
    cin>>deptid;
    cout<<"Enter basic salary: ";
    cin>>basic;
    cout<<"Enter perfbonus salary: ";
    cin>>perfbonus;}
double computeNetSalary(){
    salary=basic + perfbonus;
        cout<<salary;}
        };
class Worker{
    int id, deptid;
    string name;
    double basic,hoursworked,hourlyRate,salary;
    public : void input()
{
    cout<<"Enter employee id: ";
    cin>>id;
    cout<<"Enter department id: ";
    cin>>deptid;
    cout<<"Enter basic salary: ";
    cin>>basic;
    cout<<"Enter hoursworked: ";
    cin>>hoursworked;
    cout<<"Enter hourlyRate: ";
    cin>>hourlyRate;
}
    double computeNetSalary(){
        salary = basic + (hourlyRate*hoursworked);
        cout<<salary;}
        void hrlyRate()
        { 
            cout<<hourlyRate; 
        }
};
int main()
{
    int choice;
    Emp e;
    Mgr m;
    Worker w;
    cout<<"Enter 1 to add information to hire manager"<<endl<<"Enter 2 to add information to hire worker"<<endl;
    cin>>choice;
    switch(choice) 
    {
     case 1:   cout<<"Hire Manager"<<endl; 
          m.input();
           cout<<"Net salary = ";
          m.computeNetSalary();
          break;

     case 2:
        cout<<"Hire Worker"<<endl;
        w.input();
        cout<<"Net salary = ";
        w.computeNetSalary();
        break;

    case 3:

    case 4: cout<<"EXIT";
    break;

    default: cout<<"Invalid choice.";
    }
    return 0;
}