#include<iostream>
using namespace std;

 
class Overload
{
  int x;
  int y;
  public:
  Overload(int a,int b)
  {
  x=a;
  y=b;
  }
  
  void SetData(int a, int b)
  {
       x=a;
  y=b;
      
  }
  void GetData()
  {
  	cout<<" a  =" << x<< "b = " << y;
  }
  
};

int main()
{
	Overload over(2,3);
	Overload over1=over;
	over.GetData();
	over1.GetData();
	over1.SetData(4,5);
		over.GetData();
	over1.GetData();
	
}
