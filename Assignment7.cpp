#include<iostream>

using namespace std;

class student
{
    int roll_no;
    string name;
    string department;


    public:

    // 1. Default Constructor

    student()

    {

        roll_no = 0;                  

        name = "";                     

        department = "";              

    }


    // 2. Parameterized Constructor (Added)

    student(int r, string n, string d)

    {

        roll_no = r;

        name = n;

        department = d;

    }


    void display()

    {

        cout << "Roll_no: " << roll_no << "   Name: " << name << "   Dept: " << department << endl;

    }

   

};


int main()

{

    // Creating objects using the parameterized constructor

    student s1(1, "supriya", "CS");              

    student s2(2, "Ritika", "IT");


    // Creating an object using the default constructor

    student s3;              

    

    // Displaying the records

    s1.display();

    s2.display();

    s3.display(); // Prints default state values

   

    return 0;

}
