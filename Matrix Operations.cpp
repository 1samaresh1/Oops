/******************************************************************************

1.	Construct a class MATRIX with requisite data members. Write a in C++ program 
using appropriate member functions to add, subtract & multiply two given matrices
by overloading the operators +, -, *.

*******************************************************************************/
#include <iostream>
using namespace std;

class Matrix
{
  int arr[10][10],row,col;
  
  public:
   Matrix(){}  // Non-Parametrize constructor
   Matrix(int x[10][10],int r,int c);  // Parametrize constructor
   Matrix(Matrix &M);  // Copy- constructor
   void display();
   Matrix operator+(Matrix M2);
  Matrix operator-(Matrix M2);
  Matrix operator*(Matrix M2); 
};

Matrix Matrix::operator*(Matrix M2)
{
  Matrix t;
  if(col==M2.row)
  {
    t.row=row;
    t.col=M2.col;
    for(int i=0;i<t.row;i++)
   {
     for(int j=0;j<t.col;j++)
     {
       t.arr[i][j]=0;
       for(int k=0;k<col;k++)
       {
         t.arr[i][j]=t.arr[i][j]+(arr[i][k]*M2.arr[k][j]);
       }
     }
   }
   
  }
  else
  {
    cout<<"multiplication is not possible.";
    
  }
   return t;
}

Matrix Matrix:: operator-(Matrix M2)
{
  Matrix t;
  t.row=row;
  t.col=col;
  for(int i=0;i<t.row;i++)
   {
     for(int j=0;j<t.col;j++)
     {
       t.arr[i][j]=arr[i][j]-M2.arr[i][j];
     }
   }
   return t;
}


Matrix Matrix:: operator+(Matrix M2)
{
  Matrix t;
  t.row=row;
  t.col=col;
  for(int i=0;i<t.row;i++)
   {
     for(int j=0;j<t.col;j++)
     {
       t.arr[i][j]=arr[i][j]+M2.arr[i][j];
     }
   }
   return t;
}

Matrix::Matrix(int x[10][10],int r,int c)
{
  row=r;
  col=c;
  for(int i=0;i<row;i++)
   {
     for(int j=0;j<col;j++)
     {
       arr[i][j]=x[i][j];
     }
   }
}

Matrix:: Matrix(Matrix &M)
{
  row=M.row;
  col=M.col;
  for(int i=0;i<row;i++)
   {
     for(int j=0;j<col;j++)
     {
       arr[i][j]=M.arr[i][j];
     }
   }
}

void Matrix::display()
{
for(int i=0;i<row;i++)
   {
     for(int j=0;j<col;j++)
     {
       cout<<arr[i][j]<<" ";
     }
     cout<<endl;
   }
}

int main()
{
    
   
    
    
      cout<<"************************************************************"<<endl;
      cout<<"\n1.Create two Matrix.\n2.Additions \n3.Substruction \n4.Multiplication \nOthers to exit"<<endl;
      cout<<"************************************************************"<<endl;
              int x[10][10],r,c;
              cout<<"1st Matrix:\n";
              cout<<"Enter the value of row and column:";
              cin>>r>>c;
              cout<<"Enter the value of Elements in matrix:\n";
              for(int i=0;i<r;i++)
                {
                   for(int j=0;j<c;j++)
                     {
                       cin>>x[i][j];
                      }
                 }
              Matrix M1(x,r,c);
              M1.display();
              cout<<"2nd Matrix:\n";
              cout<<"Enter the value of row and column:";
              cin>>r>>c;
              cout<<"Enter the value of Elements in matrix:\n";
              for(int i=0;i<r;i++)
                {
                   for(int j=0;j<c;j++)
                     {
                       cin>>x[i][j];
                      }
                 }
              Matrix M2(x,r,c);
              M2.display();
              cout<<"After additions:\n";
               Matrix M3;
               M3=M1+M2;
                M3.display();
              cout<<"After substructions:\n";
               Matrix M4;
               M4=M1-M2;
               M4.display();
              cout<<"After Multiplication:\n";
               Matrix M5;
               M5=M1*M2;
               M5.display();
           
    

    return 0;
}
