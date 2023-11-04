#include<iostream>
using namespace std;

class Complex 
{
  int a,b;
  
  public:
  Complex(int a,int b) : a(a), b(b)
  {
      //this->a=a;
      //this->b=b;
  }
  
  void operator ++()
  {
      a++;
      b++;
  }
  
  
  
  void PrintData()
  {
      cout << "a = " << a << " b = " << b << endl;
  }
    
};

int main()
{
    Complex obj(10,20);
    obj.PrintData();
    ++obj;
    obj.PrintData();
    
}
