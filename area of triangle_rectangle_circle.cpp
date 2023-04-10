/********************************************************************************************************************************************

2.	Construct a class AREA with requisite data members. 
    Write a C++ program using appropriate member functions to
    calculate the area of rectangle, triangle & circle using function overloading.

******************************************************************************************************************************************/
#include <iostream>
#include<cmath>
using namespace std;

class Area
{
  float length,width,side1,side2,side3,radius;
  public:
   Area(float l,float w)
  {
    length=l;
    width=w;
    float area=(length*width);
    cout<<"Area of Rectangle:"<<area<<endl;
  
  }
   Area(float a,float b,float c)
  {
    side1=a;side2=b;side3=c;
    float s= (side1+side2+side3)/2;
   float  area1=(s*(s-side1)*(s-side2)*(s-side3));
    float area=sqrt(area1);
    cout<<"Area of Triangle:"<<area<<endl;
  
  }
   Area(float r)
  {
    radius=r;
    float area=3.14*pow(radius,2);
    cout<<"Area of Circle:"<<area<<endl;
  
  }
};
 


int main()
{
    Area(2.0,3.0,4.0);
    Area(2.0,3.0);
    Area(2.0);

    return 0;
}
