#include <iostream>
using namespace std;
namespace s1
{
    void disp()
    {cout<<"inside namespace ";}
}
namespace s2
{
    int x=100;
    int disp()
    {return 10*x;}
}
int main()
{
    s1::disp();
    cout<<s2::disp();
}
