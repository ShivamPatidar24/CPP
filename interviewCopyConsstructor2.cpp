#include<iostream>
#include<cstring>
using namespace std;
class Shivam
{
  char *name;
  int age;
  public:
  Shivam(const char *n, int a)
  {
      name = new char[strlen(n)+1];
      strcpy(name, n);
      age = a;
  }
  
  Shivam(const Shivam &obj)
  {
      name = new char[strlen(obj.name)+1];
      strcpy(name, obj.name);
      age = obj.age;
  }
  
  void SetData(const char *x, int y)
  {
      name = new char[strlen(x)+1];
      strcpy(name, x);
      age = y;
  }
  void printData()
  {
      cout << name << " " << age << endl;
  }
  
  
};

int main()
{
   Shivam s("SHIVAM",24);
   Shivam s1=s;
   s.printData();
   s1.printData();
   s1.SetData("PATIDAR",7);
    s.printData();
   s1.printData();
   
}
