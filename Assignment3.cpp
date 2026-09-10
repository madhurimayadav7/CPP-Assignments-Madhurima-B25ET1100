#include <iostream>
using namespace std;
void accept(int&,int[]);
void display(int,int[]);
void swap(int&,int&);
void sort(int, int[]);
 int main()
{
 int s,arr2[10];
 accept(s,arr2);
 cout<<"\n The unsorted array is:\t";
 display(s,arr2);
 cout<<"\n The sorted array is:\t";
 sort(s,arr2);
 display(s,arr2);
 return 0;
}

 void accept(int&m, int arr[])
{
cout<<"\n Enter size of the array-"<<endl;
cin>>m;
cout<<"Enter the elements of array-";
for(int i=0;i<m;i++)
cin>>arr[i];
}
 
 void display(int m, int arr[])
{
for(int i=0;i<m;i++)
cout<<"\t"<< arr[i];
}
void swap(int &m,int &n)
  {int temp=m;
    m=n;
    n=temp;
  }
void sort(int m, int arr[])
{
 for(int i=0;i<m;i++)
 {
  {for (int j=0;j<(m-1);j++)
     {if(arr[j] > arr[j+1])
     swap(arr[j],arr[j+1]);
     }
  }
 }
}
 
