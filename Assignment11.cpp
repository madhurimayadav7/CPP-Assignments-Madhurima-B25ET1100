#include <iostream>
using namespace std;
template <class T>
T maximumValue(T a, T b)
{
    if (a > b)
        return a;
    else
        return b;
}
template <class T>
class Box
{
    T value;

public:
    Box(T v)
    {
        value = v;
    }

    void display()
    {
        cout << "Box value = " << value << endl;
    }
};

int main()
{
    cout << "Maximum integer = "<< maximumValue(20, 25) << endl;
    cout << "Maximum double = " << maximumValue(4.5, 5.5) << endl;

    Box<int> b1(100);
    b1.display();

    Box<string> b2("Templates");
    b2.display();
    return 0;
}
