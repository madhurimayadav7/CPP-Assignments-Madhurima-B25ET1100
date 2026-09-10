
#include <iostream>
using namespace std;
int main()
{
    int a,b,c;
    cout<<"enter 2 numbers:"<<endl;
    cin>>a>>b;
    try
    {
        if(b==0)
        throw b;
        c=a/b;
        cout<<"result:\t"<<c;
    }
    catch(int x)
    {
        cout<<"Division by zero is not permitted"<<endl;
        cout<<"the error is division by:\t"<<x;
    }
    cout<<endl<<"at the end of main.";
    return 0;
}
