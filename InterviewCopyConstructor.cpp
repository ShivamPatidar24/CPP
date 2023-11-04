
#include <iostream>
#include <string>
using namespace std;

class Myclass
{
    char *name;
    int age;

public:
    // Constructor
    Myclass(const char *n, int a)
    {
        name = new char[strlen(n) + 1];
        this->name = name;
        strcpy(name, n);
        age = a;
    }

    // Deep copy constructor
    Myclass(const Myclass &source)
    {
        name = new char[strlen(source.name) + 1];
        this->name = name;
        this->name = source.name;
        age = source.age;
    }
  void PrintData()
    {
        cout << name << "  " << age << endl;
     }
    // Destructor
    
    ~Myclass()
    {
        delete[] name;
    }
};

int main()
{
    Myclass obj1("John", 30);
    Myclass obj2 = obj1;
	obj1.PrintData();
	obj2.PrintData(); // using deep copy constructor
    return 0;
}

