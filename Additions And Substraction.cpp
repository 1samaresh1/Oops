/******************************************************************************

Welcome to GDB Online.
GDB online is an online compiler and debugger tool for C, C++, Python, Java, PHP, Ruby, Perl,
C#, OCaml, VB, Swift, Pascal, Fortran, Haskell, Objective-C, Assembly, HTML, CSS, JS, SQLite, Prolog.
Code, Compile, Run and Debug online from anywhere in world.

*******************************************************************************/
#include <iostream>
using namespace std;

class Time
{
  int H,M,S;
  public:
  Time()
  {
    H=M=S=0;
  }
  Time(int h,int m, int s)
  {
    H=h;M=m;S=s;
  }
  Time(Time &T)
  {
    H=T.H;
    M=T.M;
    S=T.S;
  }
  void display()
  {
    cout<<"Time: "<<H<<":"<<M<<":"<<S<<endl;
  }
  Time addition(Time T2);
  Time Substraction(Time T2);
  
  
};

Time Time::addition(Time T2)
{
  Time T;
  
  T.S=S+T2.S;
  T.M=T.S/60;
  T.S=T.S%60;
  T.M=T.M+M+T2.M;
  T.H=T.M/60;
  T.M=T.M%60;
  T.H=T.H+H+T2.H;
  return T;
}

 Time Time::Substraction(Time T2)
 {
   Time T;
   if(S<T2.S)
   {
     T.M=M-1;
     T.S=S+60;
     T.S=T.S-T2.S;
   }
   else
   {
      T.S=S-T2.S;
   }
  if(M<T2.M)
   {
     T.H=H-1;
     T.M=M+60;
     T.M=T.M-T2.M;
   }
   else
   {
      T.M=M-T2.M;
   }
   if(H<T2.H)
   {
     T.H=H+12;
     T.H=T.H-T2.H;
   }
   else{
  T.H=H-T2.H;
}
  return T;
 }

int main()
{
    Time T1(5,45,35),T2(3,58,59),T3,T4;
    T1.display();
    T2.display();
    cout<<"Add Two Time.";
    T3=T1.addition(T2);
    T3.display();
    cout<<"sub two Time. ";
    T4=T1.Substraction(T2);
    T4.display();
    
    

    return 0;
}

