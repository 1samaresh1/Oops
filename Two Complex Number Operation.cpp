/******************************************************************************

Welcome to GDB Online.
GDB online is an online compiler and debugger tool for C, C++, Python, Java, PHP, Ruby, Perl,
C#, OCaml, VB, Swift, Pascal, Fortran, Haskell, Objective-C, Assembly, HTML, CSS, JS, SQLite, Prolog.
Code, Compile, Run and Debug online from anywhere in world.

*******************************************************************************/
#include <iostream>
#include<cmath>

using namespace std;

class Complex
{
  float real;
  float image;
  public:
  Complex()
  {
    real=image=0.0;
  }
  Complex(float r,float i)
  {
    real=r;image=i;
  }
  Complex(Complex &C)
  {
    real=C.real;
    image=C.image;
  }
  void display()
  {
    cout<<"Complex Number Z=("<<real<<" +i "<<image<<")"<<endl;
  }
 Complex operator+(Complex c2);
 Complex operator-(Complex c2);
 Complex operator*(Complex c2);
 Complex operator/(Complex c2);
  
  
};

Complex Complex :: operator+(Complex c2)
{
  Complex c;
  c.real=real+c2.real;
  c.image=image+c2.image;
  return c;
}

Complex Complex :: operator-(Complex c2)
{
  Complex c;
  c.real=real-c2.real;
  c.image=image-c2.image;
  return c;
}

Complex Complex :: operator*(Complex c2)
{
  Complex c;
  c.real=(real*c2.real)-(image*c2.image);
  c.image=(real*c2.image)+(image*c2.real);
  return c;
}

Complex Complex :: operator/(Complex c2)
{
  Complex c;
  c.real=((real*c2.real)+(image*c2.image))/(pow(c2.real,2)-pow(c2.image,2));
  c.image=(real*c2.image)+(image*c2.real)/(pow(c2.real,2)-pow(c2.image,2));
  return c;
}
int main()
{
   Complex c1(3.0,5.0),c2(2.0,6.0),c3,c4,c5,c6;
    c1.display();
    c2.display();
    cout<<"Add TwoComplex_";
    c3=c1+c2;
    c3.display();
    cout<<"sub twoComplex_";
    c4=c1-c2;
    c4.display();
    cout<<"Mul twoComplex_";
    c5=c1*c2;
    c5.display();
    cout<<"Division twoComplex_";
    c6=c1/c2;
    c6.display();
     return 0;
}


