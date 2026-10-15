#include <iostream>
using namespace std;
 class shape
{
    public:
    virtual void draw()
    {
        cout<<"\n Drawing shape";
    }
};
class circle : public shape
{
    public:
    void draw()
    {
        cout<<"\n Drawing circle";
    }
};

int main()
{
    circle c1; shape s1;
    shape *str= &c1;
    str->draw();
    s1.draw();
    c1.draw();
    return 0;
}