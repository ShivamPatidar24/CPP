
#include<iostream>
using namespace std;

class Wall
{
  int *iptr;
  float *fptr;
  
  public:
  
  Wall(int a,float b)
  {
    iptr = new int;
    fptr = new float;
    
    *iptr = a;
    *fptr = b;
  }
  
  Wall(Wall &obj)
  {
      iptr = new int;
      fptr = new float;
      
      *iptr = *obj.iptr;
      *fptr = *obj.fptr;
  }
  
  
  void SetValue(int x, float y)
  {
      *iptr = x;
      *fptr = y;
  }
  
  
  
  void PrintData()
  {
      cout << "value of iptr = " << *iptr << " value of fptr = " << *fptr << endl;
  }
    
};

int main()
{
    Wall wall1(5,2.3);
    Wall wall2 = wall1;
    wall1.PrintData();
    wall2.PrintData();
    wall2.SetValue(7,3.3);
     wall1.PrintData();
    wall2.PrintData();
    return 0;
}
