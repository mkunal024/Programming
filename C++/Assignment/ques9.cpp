/*Consider that payroll software needs to be developed for computerization of operations of an ABC 
organization. The organization has employees

1. Construct a class Employee with following members using private access specifies:
Employee Id integer
Employee Name string
Basic Salary double
HRA double
Medical double=1000
PF double
PT double
Net Salary double
Gross Salary double
Please use following expressions for calculations: //Note: Don’t accept HRA,PF PT from user
* HRA = 50% of Basic Salary
* PF = 12% of Basic Salary
* PT = Rs. 200

2. Write methods to display the details of an employee and calculate the gross and net salary.
* Goss Salary = Basic Salary + HRA + Medical
* Net Salary = Gross Salary – (PT + PF)

3 Create Object of employee class and assign values and display Details*/


#include <iostream>
using namespace std;

class Employee
{
    int id;
    string name;
    double b_salary,hra=50,medical=1000,pf=12,pt=200,net_salary,gross_salary;
public:
void input()
{
    cout<<"Enter employee id :";
    cin>>id;
    cout<<"Enter employee Name :";
    cin>>name;
    cout<<"Enter employee salary:";
    cin>>b_salary;
    cout<<"\n\n";
}
void calulate()
{
    hra=hra*b_salary/100;
    pf=pf*b_salary/100;
    gross_salary= b_salary+hra+medical;
    net_salary=gross_salary-(pt+pf);
}
void display()
{
    cout<<"Employee id : "<<name<<"\tName : "<<name<<endl;
    cout<<"Gross salary : "<<gross_salary<<endl<<"Net salary : "<<net_salary<<endl;
}
};
int main()
{
    Employee details;
    details.input();
    details.calulate();
    details.display();
    return 0;
}
