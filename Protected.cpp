#include<iostream>
class Base
{   
   int x;
   
   protected:
   
   int a;
   int b;
   
   public:
   int getA()
   {
       return a;
   }
   int getB()
   {
       return b;
   }
   
   
};

class Child:public Base
{
 public:
 void setA(int a)
 {
    this->a=a; 
 }
 void setB(int b)
 {
    this->b=b;
 }
    
};


int main()
{
    Child obj1;
    Child obj2 = obj1;
}
