/******************************************************************************

Welcome to GDB Online.
GDB online is an online compiler and debugger tool for C, C++, Python, Java, PHP, Ruby, Perl,
C#, OCaml, VB, Swift, Pascal, Fortran, Haskell, Objective-C, Assembly, HTML, CSS, JS, SQLite, Prolog.
Code, Compile, Run and Debug online from anywhere in world.

*******************************************************************************/
#include <iostream>

using namespace std;

class Student
{
  protected:
    int roll;
    string name;
  public:
    void getdata(int r,string nam)
    {
      roll=r;
      name=nam;
    }
    void putdata()
    {
      cout<<"Roll:- "<<roll<<"\n Name:-"<<name<<endl;
    }
};

class Test: public virtual Student
{
  protected:
    int m1,m2;
  public:
    void getdata(int r,string nam,int x,int y)
    {
      Student::getdata(r,nam);
      m1=x;
      m2=y;
    }
    void putdata()
    {
      //Student::putdata();
      cout<<"\n Masks1= "<< m1<<"\nMasks2="<< m2<<endl;
    }
};

class Sports:public virtual Student
{
  protected:
    int score;
  public:
    void getdata(int r,string nam,int z)
    {
      Student::getdata(r,nam);
      score=z;
    }
    void putdata()
    {
      //Student::putdata();
      cout<<"\n Score:- "<<score<<endl;
    }
};
class Result: public Test,public Sports 
{
  int total,avg;
  public:
    void getdata(int r,string nam,int x,int y,int z)
    {
      Test::getdata( r, nam, x, y);
      Sports::getdata(r,nam,z);
      total=m1+m2+score;
      avg=total/3;
      
    }
    void putdata()
    {
       Student::putdata();
       Test::putdata();
      Sports::putdata();
      cout<<"\n Total="<<total<<"\naverage="<<avg<<endl;
    }
};

int main()
{
  Result r;
 // Student::putdata();
  r.getdata(1,"Samaresh",76,87,90);
  // Student::putdata();
  r.putdata();

    return 0;
}



