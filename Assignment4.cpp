#include<iostream>
using namespace std;
class complex
  { 
    double real,img;
    public:
    void accept(float a, float b)
    {
    real=a;
    img=b;
    }
    void display()
   {
       cout<<real<<"+i"<<img;
       
   }
   complex add(complex c)
   {
       complex sum;
       sum.real= real + c.real;
       sum.img= img + c.img;
       return sum;
   }
       complex sub(complex c)
   {
       complex dif;
       dif.real= real - c.real;
       dif.img= img - c.img;
       return dif;
   }
   complex mul(complex c)
   {
       complex mul;
       mul.real= real *c.real- img * c.img;
       mul.img= real *c.img+ img * c.real;
       return mul;
   }
   complex divid(complex c)
   {
       complex divid;
    float den = c.real * c.real + c.img * c.img;

    divid.real = (real * c.real + img * c.img) / den;
    divid.img  = (img * c.real - real * c.img) / den;
     return divid;
   };
      complex conjugate()
   {
    complex con;
    con.real = real;
    con.img = -img;
    return con;
   }
  };
int main()
{
   complex c1,c2,c3, c4,c5,c6,c7;
    c1.accept (3,2);
    c2.accept(6,8);
    cout<<"c1=\t";
    c1.display();
    cout<<"\nc2=\t";
    c2.display();
 
    c3= c1.add(c2);
    cout<<"\nAddition= ";
    c3.display();
    c4= c1.sub(c2);
    cout<<"\nSubtraction= ";
    c4.display();
    c5= c2.mul(c1);
    cout<<"\nMultiplication= ";
    c5.display();
    c6= c1.divid(c2);
    cout<<"\nDivision= ";
    c6.display();
    c7 = c1.conjugate();
    cout << "\nConjugate of c1 = ";
    c7.display();
    return 0;
 
}