/******************************************************************************

3.	Write a program in C++ using class to implement Push & Pop operations of Stack.

*******************************************************************************/
#include <iostream>
using namespace std;
#define max 5

class stack
{
  int i,arr[max],top=0;
  public:
   void push(int x);
   void pop();
   void display();
};

void stack::display()
{
  cout<<"The is list of elements:\n";
  for(int i=(top-1);i>=0;--i)
  {
    cout<<arr[i]<<endl;
  }
}
void stack::pop()
{
  if(top==0)
  {
    cout<<"Stack is Empty(underflow)\n";
  
  }
  else
  {
    
  cout<<"Pop the element from the stack:"<<arr[top-1]<<endl;
   top=top-1;
  }
  
}
void stack::push(int x)
{
  if(top==max)
  {
    cout<<"stack is full(overflow)\n";
 }
   else
  {
    arr[top]=x;
    top++;
  }
}


int main()
{
    int choise,exit_p=1;
    stack obj;
    do
    {
      cout<<"************************************************************"<<endl;
      cout<<"\n1.Push \n2.Pop \n3.Display \nOthers to exit"<<endl;
      cout << "\nEnter Your Choice : ";
        cin>>choise;
        switch (choise)
        {
            case 1:
              int val;
              cout<<"Enter the value in stack:";
              cin>>val;
              
                obj.push(val);
                break;
            case 2:
                obj.pop();
                break;
            case 3:
                obj.display();
                break;
            default:
                exit_p = 0;
                break;
        }
    } while (exit_p);
    

    return 0;
}


