#include<iostream>
using std::cout, std::endl;

class Overload
{
  int a,b;
  
  public:
  Overload(int a=0,int b=0)
  {
      this->a=a;
      this->b=b;
  }
  
  Overload operator * (const Overload& obj)
  {
      Overload over;
      over.a = a * obj.a;
      over.b = b * obj.b;
      return over;
      
   
  }
   
   void PrintData()
   {
       cout << "a = " << a << " b = " << b << endl;
   }
};

int main()
{
    Overload obj1(10, 20);
    Overload obj2(10,5);
    Overload obj3 = obj1 * obj2;
    obj3.PrintData();
    return 0;
}
