#include <iostream>
using namespace std;

int fact(int p)
{
    int result=1;
    for(int i=p;i>1;i--)
    result=result*i;
    return result;
}
int ncr(int n, int r)
{
    int result= (fact(n))/(fact(r)*fact(n-r));
    return result;
}

void printpascal (int l)
{
    for(int i=0;i<l;i++)
    {
        for(int j=0;j<=i;j++)
        {
            cout<<"\t"<<ncr(i,j);
        }
        cout<<endl;
    }
}

int main() 
{
    int n;
    cout<<("\nenter number of rows:\n");
    cin>>n;
    cout<<("\n Pascal Triangle;\n");
    printpascal(n);
    return 0;
}
