#include <iostream>
#include <string>
using namespace std;
class basicInfo
{
    protected:
    string name;
    string address;
    int age;

    public:
    void accepBasicInfo()
    {
        cout<<"\n Enter name: ";
        cin>>name;
        cout<<"\n Enter address: ";
        cin>>address;
        cout<<"\n Enter age: ";
        cin>>age;
    }
     void dispBasicInfo()
    {
        cout << "\nName = " << name;
        cout << "\nAddress= " << address;
        cout << "\nAge= " << age;
    }
    
};

class deptInfo
{
    protected:
    string namedept;
    string natureWork;

    public:
    void accepDeptInfo()
    {
        cout<<"\n Enter Department Name: ";
        cin>>namedept;
        cout<<"\n Enter Nature of work: ";
        cin>>natureWork;
    }
    void dispDeptInfo()
    {
        cout << "\nDepartment Name = " <<namedept;
        cout << "\nNature of work= " <<natureWork;
    }
    
};
class employee : public basicInfo, public deptInfo
{
    int empID;
    double empSalary;
    
    public:
    void accepEmployee()
    {
        accepBasicInfo();
        accepDeptInfo();
        cout<<"\n Enter Employee ID: ";
        cin>>empID;
        cout<<"\n Enter Employee Salary: ";
        cin>>empSalary;
    }
    void dispEmployee()
    {
        dispBasicInfo();
        dispDeptInfo();
        cout << "\nEmployee ID = " <<empID;
        cout << "\nEmployee Salary= " <<empSalary;
    }
};

int main() 
{
    employee e[5];
    for(int i=1; i<=5;i++)
    {
        cout<<"\nEmployee:"<<i;
        e[i].accepEmployee();
        e[i].dispEmployee();
    
    }
  
    
}

