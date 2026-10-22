#include <iostream>
using namespace std;

class Shape
{
public:
    virtual void area() = 0;

    virtual ~Shape() {}
};

// Derived class Circle
class Circle : public Shape
{
public:
    void area()
    {
        float r = 3.0;
        cout << "Area of circle = " << 3.14159 * r * r << endl;
    }
};

// Derived class Rectangle
class Rectangle : public Shape
{
public:
    void area()
    {
        float length = 5.0;
        float breadth = 4.0;

        cout << "Area of rectangle = " << length * breadth << endl;
    }
};

int main()
{
    Circle c1;
    Rectangle r1;

    Shape *ptr1 = &c1;
    Shape *ptr2 = &r1;

    ptr1->area();
    ptr2->area();

    return 0;
}
