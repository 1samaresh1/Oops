#include <iostream>

using namespace std;

class Office
{
    float Basic,HRA,Add_allow=0.0;
    string name;
  public:
    void getdata();
    void putdata();
};


void Office::getdata()
{
   char ch;
   cout<<"Enter the stuff Name:";
   cin>>name;
   cout<<"Basic:";
   cin>>Basic;
   cout<<"HRA:";
   cin>>HRA;
   cout<<"She/He is Manager:";
   cin>>ch;
   if(ch=='y')
   {
     cout<<"Enter the additional allowance: ";
     cin>>Add_allow;
   }
}

void  Office::putdata()
{
  cout<<"Staff_Name:"<<name<<endl;
  cout<<"Basic:"<<Basic<<endl;
  cout<<"HRA:"<<HRA<<endl;
  cout<<"additional allowance:"<<Add_allow<<endl;
}



class Kolkata: public Office
{
  float Sp_allow;
  public:
    void getdata()
    {
      Office:: getdata();
      cout<<"Enter the special allowance";
      cin>>Sp_allow;
    }
    void putdata()
    {
       Office::  putdata();
      cout<<"Special allowance "<<Sp_allow<<endl;
    }
    
};

class Delhi :public Office
{
   float C_allow;
  public:
    void getdata()
    {
      Office:: getdata();
      cout<<"Enter the city allowance ";
      cin>>C_allow;
    }
    void putdata()
    {
       Office::  putdata();
       cout<<"City allowance  "<<C_allow<<endl;
    }
};
class Darjeeling: public Office 
{
  float H_allow;
  public:
   void getdata()
    {
      Office:: getdata();
      cout<<"Enter the hill allowance ";
      cin>>H_allow;
    }
    void putdata()
    {
       Office::  putdata();
       cout<<"Hill allowance  "<<H_allow<<endl;
    }
    
};

int main()
{
   Kolkata k;
   Delhi d;
   Darjeeling dj;
   
   cout<<"Entry all info. Kolkata branche."<<endl;
   k.getdata();
   cout<<"**********************************************"<<endl;
   cout<<"Display all info. Kolkata branche.\n"<<endl;
   k.putdata();
   cout<<"**********************************************"<<endl;
    cout<<"Entry all info. Delhi  branche."<<endl;
   d.getdata();
   cout<<"**********************************************"<<endl;
   cout<<"Display all info. Delhi branche.\n"<<endl;
   d.putdata();
   cout<<"**********************************************"<<endl;
   cout<<"Entry all info.Darjeeling  branche."<<endl;
   dj.getdata();
   cout<<"**********************************************"<<endl;
   cout<<"Display all info. Darjeeling branche.\n"<<endl;
   dj.putdata();
   cout<<"**********************************************"<<endl;
    return 0;
}


