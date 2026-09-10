#include <iostream>
using namespace std;

int add(int a, int b)
{
    return(a+b);
}

int add(int a, int b,int c)
{
    return(a+b+c);
}

int add(int a, int b,int c, int d)
{
    return(a+b+c+d);
}



float add(float p, float q)
{
    return(p+q);
}
float add(float p, float q,float r)
{
    return(p+q+r);
}
float add(float p, float q,float r, float s)
{
    return(p+q+r+s);
}



int main() 
{
    int a,b,c,d;
    float p,q,r,s;
    cout<<("\nenter 4 integers(a,b,c,d):\n");
    cin>>a>>b>>c>>d;
    cout<<("\nSUM of a and b:\t")<<add(a,b);
    cout<<("\nSUM of a,b and c:\t")<<add(a,b,c);
    cout<<("\nSUM of all 4 numbers:\t")<<add(a,b,c,d);
    
    cout<<("\nenter 4  decimals:\n");
    cin>>p>>q>>r>>s;
    cout<<("\nSUM of p and q:\t")<<add(p,q);
    cout<<("\nSUM of p, q and r:\t")<<add(p,q,r);
    cout<<("\nSUM of all:")<<add(p,q,r,s);
    
}
