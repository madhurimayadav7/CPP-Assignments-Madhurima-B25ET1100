#include <iostream>
using namespace std;

int main() 
{
    int sumeven=0;
    for(int i=0;i<=50;i++)
    {
        if(i%2==0)
        sumeven+=i;
    }
    int sumodd=0;
    for(int n=2;n<=50;n++)
    {
        if(n%2!=0)
        sumodd+=n;
        
    }
 
    cout <<"\nSUM OF ALL EVEN NUMBERS FROM 1 TO 50:\n";
    cout<< sumeven;
     cout <<"\nSUM OF ALL ODD NUMBERS FROM 1 TO 50:\n";
    cout<< sumodd;
    return 0;
}

